#include <bits/stdc++.h>
using namespace std;
int num[2001];
int dp[2001][2001];
int n;
int solve(int l, int r){
	if(l == n || r == n) return 0;
	int &ret = dp[l][r];
	if(ret != -1) return ret;
	if(!r){
		return ret = min(solve(l+1, r) + abs(num[l+1]-num[l]), solve(l, l+1));
	}
	else{
		int m = max(l, r);
		return ret = min(solve(m+1, r) + abs(num[m+1]-num[l]), solve(l, m+1)+abs(num[m+1]-num[r]));
	}
}

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &num[i]);
	}
	memset(dp, -1, sizeof(dp));
	printf("%d\n", solve(1, 0));
/*
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", dp[i][j]);
		}
		puts("");
	}
	*/
}