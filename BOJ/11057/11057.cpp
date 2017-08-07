#include <bits/stdc++.h>
const long long mod = 10007;
long long dp[1001][10];
int n;
int main(){
	scanf("%d", &n);
	for(int i = 0; i < 10; i++) dp[1][i] = 1;		
	for(int i = 2; i <= n; i++){
		for(int j = 0; j < 10; j++){
			for(int k = j; k >= 0; k--){
				dp[i][j] = ((dp[i][j] % mod) + (dp[i-1][k]%mod)) % mod;
			}
		}
	}
	long long ret = 0;
	for(int i = 0; i <10; i++){
		ret =  ((ret % mod) + (dp[n][i] % mod)) % mod;

	}
	printf("%lld\n", ret);
}