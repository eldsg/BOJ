#include<cstdio>
#include<cstdlib>

const unsigned long long int mod = 1000000000;

unsigned long long int dp[101][10];
void init(){
	dp[1][0] = 0;
	for(int i = 1; i < 10; i++){
		dp[1][i] = 1;
	}
	for(int i = 2; i <= 100; i++){
		for(int j = 0; j < 10; j++){
			if(!j) dp[i][j] = dp[i-1][1] % mod;
			else if(j == 9) dp[i][j] = dp[i-1][8] % mod;
			else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % mod;
		}
	}
}
int main(){
	int input;
	scanf("%d", &input);
	init();
	unsigned long long int ret = 0;
	for(int i = 0; i<10; i++){
		ret = (ret + dp[input][i]) % mod;
	}
	printf("%lld\n", ret % mod);
}
