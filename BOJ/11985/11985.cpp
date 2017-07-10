#include <bits/stdc++.h>
using namespace std;
const int MAXN = 20000;

int num[MAXN+1];
long long dp[MAXN+1];

int main(){
	int n, m;
	long long k;
	scanf("%d%d%lld", &n, &m, &k);
	for(int i = 1; i <= n; i++){
		scanf("%d", &num[i]);
		dp[i] = LLONG_MAX;
	}
	dp[0] = 0;
	for(int i = 1; i <= n; i++){
		int minn = num[i], maxn = num[i]; 
		for(int j = 0; j < m; j++){
			if(i+j > n) break;
			minn = minn > num[i+j] ? num[i+j] : minn;
			maxn = maxn < num[i+j] ? num[i+j] : maxn;
			dp[i+j] = min(dp[i-1]+k+1ll*(j+1) *(maxn-minn), dp[i+j]);
		}
	}
	//for(int i = 1; i <= n; i++) printf("%lld\n", dp[i]);
	printf("%lld\n", dp[n]);
}