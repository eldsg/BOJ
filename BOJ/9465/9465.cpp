#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main(){
    int testcase;
    scanf("%d", &testcase);
    while(testcase--){
        int array[2][100001];
        int dp[2][100001];
        int num;
        scanf("%d", &num);
        for(int i = 0; i< 2; i++){
            for(int j =0; j<num; j++){
                scanf("%d",&array[i][j]);
            }
        }
        dp[0][0] = array[0][0];
        dp[1][0] = array[1][0];
        
        for(int i = 1; i<num; i++){
            dp[0][i] = max(dp[0][i-1],array[0][i]+dp[1][i-1]);
            dp[1][i] = max(dp[1][i-1],array[1][i]+dp[0][i-1]);
        }
        printf("%d\n", max(dp[0][num-1],dp[1][num-1]));
    }

}
