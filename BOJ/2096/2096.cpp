#include<algorithm>
#include<stdio.h>
using namespace std;
int min3(int a, int b, int c){
	int temp = a;
	if (temp > b) temp = b;
	if (temp > c) temp = c;
	return temp;
}
int max3(int a,int b, int c){
    int temp = a;
    if(temp < b) temp = b;
    if(temp < c) temp = c;
    return temp;
}
int main(){
    int dp[100001][3];
    int star[100001][3];
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        scanf("%d %d %d", &star[i][0], &star[i][1], &star[i][2]);
    }
    dp[0][0]=0;
    dp[0][1]=0;
    dp[0][2]=0;
    for(int i=1; i<=t; i++){
        for(int j=0; j<3; j++){
            if(j==0) dp[i][j] = min(dp[i-1][1],dp[i-1][0])+star[i][j];
            else if(j==1) dp[i][j] = min3(dp[i-1][1],dp[i-1][0],dp[i-1][2])+star[i][j];
            else if(j==2) dp[i][j] = min(dp[i-1][1],dp[i-1][2])+star[i][j];
        }
    }
    int result = min3(dp[t][0],dp[t][1],dp[t][2]);
    for(int i=1; i<=t; i++){
        for(int j=0; j<3; j++){
            if(j==0) dp[i][j] = max(dp[i-1][1],dp[i-1][0])+star[i][j];
            else if(j==1) dp[i][j] = max3(dp[i-1][1],dp[i-1][0],dp[i-1][2])+star[i][j];
            else if(j==2) dp[i][j] = max(dp[i-1][1],dp[i-1][2])+star[i][j];
        }
    }
    int result2 = max3(dp[t][0],dp[t][1],dp[t][2]);
    printf("%d %d",result2, result);
}