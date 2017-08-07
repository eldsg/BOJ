#include <bits/stdc++.h>

bool vip[41];
int dp[41];
int main(){
	int n, k, v;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < k; i++){
		scanf("%d", &v);
		vip[v] = true;
	}
	dp[0] = dp[1] = 1;
	for(int i = 2; i <= n; i++){
		dp[i] = dp[i-1]+dp[i-2];
	}
	int kk = 0;
	int ret = 1;
	for(int i = 1; i <= n; i++){
		if(vip[i]) {
			//printf("%d\n", kk);
			ret *= dp[kk];
			kk = 0;
		}
		else kk++;
	}
	ret *= dp[kk];
	printf("%d\n", ret);
}