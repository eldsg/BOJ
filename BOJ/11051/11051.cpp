#include<cstdio>

#define MOD 10007

long long dp[1001][1001];

long long bio(int n, int k){
	if(n == k || n == 1 || k == 0) return 1;
	if(k == 1) return n;
	if(dp[n][k] != 0) return dp[n][k];
	return dp[n][k] = ((bio(n-1, k-1) % MOD) + (bio(n-1, k)%MOD)) %MOD;

}

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	printf("%lld", bio(n, k));
}
