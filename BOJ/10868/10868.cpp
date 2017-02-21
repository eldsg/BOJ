#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

long long init(vector<long long> &a, vector<long long> &st, int n, int s, int e){
	if(s==e) return st[n] = a[s];
	else return st[n] = min(init(a, st, n*2, s, (s+e)/2), init(a, st, n*2+1, (s+e)/2+1, e));
}
long long query(vector<long long> &st, int n, int s, int e, int l, int r){
	if(l > e || r < s) return 1e10;
	if(l <= s && e <= r) return st[n];
	return min(query(st, n*2, s, (s+e)/2, l, r), query(st, n*2+1, (s+e)/2+1, e, l, r));
}
long long update(vector<long long> &st, int n, int s, int e, int i, long long val){
	if(i < s || i > e) return st[n];
	if(s==e) return st[n] = val;
	return st[n] = min(update(st, n*2, s, (s+e)/2, i, val), update(st, n*2+1, (s+e)/2+1, e, i, val));
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int h = (int)ceil(log2(a));
	int ts = ( 1 << (h+1));
	vector<long long> numbers(a);
	vector<long long> segTree(ts, 1);
	for(int i = 1; i <= a; i++) scanf("%lld", &numbers[i]);
	init(numbers, segTree, 1, 1, a);
	for(int i = 0,c,d; i < b; i++){
		scanf("%d%d", &c, &d);
		printf("%lld\n", query(segTree, 1, 1, a, c, d));
	}
}
