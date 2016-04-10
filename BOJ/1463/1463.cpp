#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    int N,dp[1000001];
    scanf("%d", &N);
    fill(dp, dp+N+1, 1000000);
    dp[1]=0;
    for(int i=2; i<=N; i++){
        dp[i] = min(dp[i],dp[i-1]+1);
        if(!(i%3)) dp[i] = min(dp[i],dp[i/3]+1);
        if(!(i%2)) dp[i] = min(dp[i],dp[i/2]+1);
    }
	printf("%d", dp[N]);
}