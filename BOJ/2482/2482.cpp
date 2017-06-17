#include<cstdio>

#define MOD 1000000003

int dp[1001][1001];

int proc(int a, int b){
	if(b > a/2) return dp[a][b] = 0;
	if(b == 1) return dp[a][b] = a;
	else if(!dp[a][b])	return dp[a][b] = (proc(a-2, b-1)%MOD + proc(a-1, b)%MOD)%MOD;
}

int main(){
	int N, K;
	scanf("%d%d", &N, &K);
	printf("%d\n", proc(N, K));
}
