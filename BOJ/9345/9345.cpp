#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int init1(vector<int> &a, vector<int> &st, int n, int s, int e){
	if(s==e) return st[n] = a[s];
	return st[n] = max(init1(a, st, n*2, s, (s+e)/2) , init1(a, st, n*2+1, (s+e)/2+1, e));
}
int init2(vector<int> &a, vector<int> &st, int n, int s, int e){
	if(s==e) return st[n] = a[s];
	return st[n] = min(init2(a, st, n*2, s, (s+e)/2), init2(a, st, n*2+1, (s+e)/2+1, e));
}
int query1(vector<int> &st, int n, int s, int e, int l, int r){
	if(l > e || r < s) return -1e9;
	if(l <= s && e <= r) return st[n];
	return max(query1(st, n*2, s, (s+e)/2, l, r), query1(st, n*2+1, (s+e)/2+1, e, l, r));
}
int query2(vector<int> &st, int n, int s, int e, int l, int r){
	if(l > e || r < s) return 1e9;
	if(l <= s && e <= r) return st[n];
	return min(query2(st, n*2, s, (s+e)/2, l, r) ,query2(st, n*2+1, (s+e)/2+1, e, l, r));
}
int update1(vector<int> &st, int n, int i, int s, int e, int val){
	if(i < s || i > e) return st[n];
	if(s==e) return st[n] = val;
	return st[n] = max(update1(st, n*2, i, s, (s+e)/2, val), update1(st, n*2+1, i, (s+e)/2+1, e, val));
}
int update2(vector<int> &st, int n, int i, int s, int e, int val){
	if(i < s || i > e) return st[n];
	if(s==e) return st[n] = val;
	return st[n] = min(update2(st, n*2, i, s, (s+e)/2, val), update2(st, n*2+1, i, (s+e)/2+1, e, val));
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int h = (int)ceil(log2(a));
		int ts = ( 1 << (h+1));
		vector<int> numbers(a+1);
		vector<int> t1(ts);
		vector<int> t2(ts);
		for(int i = 0; i < a; i++) {
			numbers[i] = i;
		}
		init1(numbers, t1, 1, 0, a-1);
		init2(numbers, t2, 1, 0, a-1);
		for(int i = 0; i < b; i++){
			int c, d, e;
			scanf("%d%d%d", &c, &d, &e);
			if(!c){
				swap(numbers[d], numbers[e]);
				update1(t1, 1, d, 0, a-1, numbers[d]);
				update1(t1, 1, e, 0, a-1, numbers[e]);
				update2(t2, 1, d, 0, a-1, numbers[d]);
				update2(t2, 1, e, 0, a-1, numbers[e]);
			}
			else{
				int k = query1(t1, 1, 0, a-1, d, e);
				int l = query2(t2, 1, 0, a-1, d, e);
				if(k==e && l==d) printf("YES\n");
				else printf("NO\n");
			}
		}
	}
}
