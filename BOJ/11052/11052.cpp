#include<cstdio>
#include<algorithm>

int fish[1001], dp[1001] = {0, }, num;

void process(){
	for(int i = 1; i<=num; i++){
		scanf("%d", &fish[i]);
	}
	dp[1] = fish[1];
	for(int i = 2; i <= num; i++){
		for(int j = 1; j <= i; j++){
			dp[i] = std::max(dp[i], dp[i-j]+fish[j]);
		}
	}
	printf("%d\n", dp[num]);
}

int main(){
	scanf("%d", &num);
	process();
}
