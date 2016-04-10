#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int four[100001];
int dp[300001];
int main(){
	int value;
	int max = 0;
	int j = 0;
	scanf("%d", &value);
	for(int i = 1; (max+=i*(i+1)/2)<=value; i++){
		four[j++] = max;
	}
	for(int i = 0; i<=value; i++) dp[i]=300001;
	for(int i = 0; i<j; i++){
		int k;
		dp[four[i]]=1;
		for(k=four[i]; k<=value; k++)
		{
			if(dp[k]>dp[k-four[i]]+1) dp[k] = dp[k-four[i]]+1;
			else dp[k] = dp[k];
		}
	}
	printf("%d", dp[value]);
}
