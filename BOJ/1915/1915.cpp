#include<cstdio>

int dp[1001][1001];
int min(int a, int b){
	return a > b ? b : a;
}
int max(int a, int b){
	return a > b ? a : b;
}
int main(){
	int n, m, ma = 0;
	scanf("%d%d\n", &n,&m);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			int num;
			scanf("%1d", &num);
			if(num){
				dp[i][j] = min(dp[i][j-1], min(dp[i-1][j-1], dp[i-1][j]))+1;
				ma = max(ma,dp[i][j]);
			}
		}
	}
	printf("%d\n", ma*ma);
}
