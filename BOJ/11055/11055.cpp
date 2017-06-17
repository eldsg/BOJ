#include<cstdio>
#include<algorithm>

using namespace std;

int num[1001], dp[1001];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", num+i);
	for(int i = 0; i < n; i++){
		dp[i] = num[i];
		int min = 0;
		for(int j = 0; j < i; j++){
			if(num[i] > num[j]) {
				dp[i] = max(dp[i], dp[j]+num[i]);
			}
		}
	}
	sort(dp, dp+n);
	printf("%d\n", dp[n-1]);
}
