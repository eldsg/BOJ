#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>

int card[1024];
int sum[1024];
int dp[1024][1024];

int process(int left, int right){
	if(left > right) return 0;
	if(left == right) return card[left];
	if(dp[left][right] != -1) return dp[left][right];
	int &ret = dp[left][right];

	ret = std::max(sum[right] - sum[left-1] - process(left+1, right), sum[right]-sum[left-1] - process(left, right-1));
	return ret; 
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		memset(dp, -1, sizeof(dp));
		memset(card, 0, sizeof(card));
		memset(sum, 0, sizeof(sum));
		scanf("%d", &a);
		for(int i = 1; i <= a; i++){
			scanf("%d", &card[i]);
			sum[i] = sum[i-1] + card[i];
		}
		int ret = process(1, a);
		printf("%d\n", ret);
	}
}
