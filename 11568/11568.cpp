#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
	int i, n, j, num[1001], dp[1001];
	scanf("%d", &n);
	for(i = 0; i<n; i++) scanf("%d", &num[i]);
	for(i = 0; i<n; i++){
		dp[i] = 1;
		for(j=0; j<i; j++){
			if(num[j] < num[i] && 1 + dp[j] > dp[i]){
				dp[i] = 1+dp[j];
			}
		}
	}
	sort(dp, dp+n);
	printf("%d\n", dp[n-1]);
}
