#include<cstdio>
#include<algorithm>
int n, a[1001], dp[1001];

void process(){
	for(int i = 0; i<n; i++){
		dp[i] = 1;
		for(int j = 0; j<i; j++){
			if(a[i] > a[j] && dp[i] < dp[j]+1){
				dp[i] = 1 + dp[j];
			}
		}
	}
	std::sort(dp, dp+n);
	printf("%d\n", dp[n-1]);
}

int main(){
	scanf("%d", &n);
	for(int i = 0; i< n; i++) scanf("%d", &a[i]);
	process();
}
