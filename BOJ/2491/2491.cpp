#include<cstdio>
#include<cstdlib>
#include<algorithm>

int child[100001];
int dp[100001];
int dp2[100001];
int n;
void process(){
	for(int i = 1; i <= n; i++){
		if(child[i-1] >= child[i] && dp[i] < dp[i-1]+1){
			dp[i] = 1 + dp[i-1];
		}
		if(child[i-1] <= child[i] && dp2[i] < dp2[i-1]+1){
			dp2[i] = 1 + dp2[i-1];
		}
	}
	std::sort(dp, dp+n);
	std::sort(dp2, dp2+n);
	printf("%d\n", dp[n-1] > dp2[n-1] ? dp[n-1] : dp2[n-1]);
}

int main(){
	scanf("%d", &n);
	for(int i = 0; i<n; i++) scanf("%d", &child[i]), dp[i] = 1, dp2[i] = 1;
	process();
}

