#include<cstdio>

int dp[11][11];

int bio(int n, int k){
	if(n == k || n == 1 || k == 0) return 1;
	if(k == 1) return n;
	if(dp[n][k] != 0) return dp[n][k];
	return dp[n][k] = bio(n-1, k-1) + bio(n-1, k);

}

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	printf("%d", bio(n, k));
}
