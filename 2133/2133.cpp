#include<stdio.h>
long long dp[31]={1, 0, }, dp1[31]={0, 1,};
int main(){
    int N;
    scanf("%d", &N);
    if(N%2!=0){
        printf("0");
        return 0;
    }
    else {
        for(int i =2; i<=N; i++){
            dp[i] = dp[i-2]+2*dp1[i-1];
            dp1[i] = dp[i-1]+dp1[i-2];
        }
    }
    printf("%lld", dp[N]+dp1[N]);

}