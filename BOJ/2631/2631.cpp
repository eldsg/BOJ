#include <bits/stdc++.h>

int dp[201];

int main(){
	int n, num[201];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", num+i);
	dp[0] = 1;
	int ret = 0;
	for(int i = 1; i < n; i++){
		dp[i] = 1;
		for(int j = 0; j < i; j++){
			if(num[i] > num[j] && dp[j]+1 > dp[i]){
				dp[i] = dp[j] + 1;
				if(dp[i] > ret) ret = dp[i];
			}
		}
	}
	printf("%d\n", n-ret);
}