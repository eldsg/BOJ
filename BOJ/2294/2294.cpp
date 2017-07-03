#include <bits/stdc++.h>

using namespace std;
const int inf = 1e9;
int b[101];
int dp[10001] = {0, };
int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < 10001; i++) dp[i] = inf;
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
		if(b[i] > k) continue;
		dp[b[i]] = 1;
	}
	dp[0] = 0;
	for(int i = 1; i <= k; i++){
		for(int j = 0; j < n; j++){
			if(i < b[j] || b[j] > k || b[j] < 0) continue;
			dp[i] = min(dp[i], dp[b[j]]+dp[i-b[j]]);
		}
	}
	//for(int i = 1; i <= k; i++) printf("%d ", dp[i]);
	printf("%d\n", dp[k] != inf ? dp[k] : -1);
}
