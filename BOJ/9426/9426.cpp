#include<cstdio>

using namespace std;

#define MAXN 65535
#define MAX_N 250000
#define ll long long
ll segtree[MAXN*4+1];
int nums[MAX_N+1]; 
int n, k;
ll ret = 0;

ll query(int n, int s, int e, int val){
	if(s==e) return s;
	if(segtree[n*2] >= val) return query(2*n, s, (s+e)/2, val);
	return query(2*n+1, (s+e)/2+1, e, val-segtree[n*2]);
}

ll update(int n, int s, int e, int i, int val){
	if(i < s || i > e) return segtree[n];
	if(s==e) return segtree[n] += val;
	return segtree[n] = update(2*n, s, (s+e)/2, i, val) + update(2*n+1, (s+e)/2+1, e, i, val);
}

int main(){
	scanf("%d%d", &n,&k);
	for(int i = 0; i < n; i++){
		scanf("%d", nums+i);
	}
	for(int i = 0; i < k-1; i++){
		update(1, 0, MAXN, nums[i], 1);
	}
	for(int i = k-1; i < n; i++){
		update(1, 0, MAXN, nums[i], 1);
		ret += query(1, 0, MAXN, (k+1)/2);
		update(1, 0, MAXN, nums[i-k+1], -1);
	}
	printf("%lld\n", ret);
}
