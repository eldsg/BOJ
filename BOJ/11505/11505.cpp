#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cmath>

using namespace std;

#define MOD 1000000007
long long init(vector<long long> &a, vector<long long> &tree, int node, int s, int e){
	if(s==e) return tree[node] = a[s];
	else return tree[node] = (init(a, tree, node*2, s, (s+e)/2) * init(a, tree, node*2+1, (s+e)/2+1, e))%MOD;
}
long long mul(vector<long long> &tree, int node, int s, int e, int l, int r){
	if(l > e || r < s) return 1;
	if(l <= s && e <= r) return tree[node];
	return (mul(tree, node*2, s, (s+e)/2, l, r) * mul(tree, node*2+1, (s+e)/2+1, e, l, r)) % MOD;
}
long long update(vector<long long> &tree, int node, int s, int e, int i, long long v){
	if(i < s || i > e) return tree[node];
	if(s == e) return tree[node] = v;
	return tree[node] = (update(tree, node*2, s, (s+e)/2, i, v) * update(tree, node*2+1, (s+e)/2+1, e, i, v)) % MOD;
}
int main(){
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	int h = (int)ceil(log2(n));
	int ts = ( 1 << (h+1));
	vector<long long> numbers(n);
	vector<long long> segTree(ts, 1);
	for(int i = 0; i < n; i++) scanf("%lld", &numbers[i]);
	init(numbers, segTree, 1, 0, n-1);
	for(int i = 0; i < a+b; i++){
		int c, d, e;
		scanf("%d %d %d", &c, &d, &e);
		if(c==1){
			update(segTree, 1, 0, n-1, d-1, e);
			numbers[d-1]=e;
		}
		else{
			printf("%lld\n", mul(segTree, 1, 0, n-1, d-1, e-1));
		}
	}
	
}
