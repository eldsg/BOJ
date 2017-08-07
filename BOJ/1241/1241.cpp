#include <bits/stdc++.h>

using namespace std;

int pi[100001];
int dp[1000001];
int ret[100001];
int p;
int main(){
    scanf("%d",&p);
    for(int i = 1; i <= p; i++){
        scanf("%d", &pi[i]);
        dp[pi[i]]++;
    }
    /*
    for(int i = 1; i <= p; i++){
        if(pi[i] == 1) ret[i] = dp[1]-1;
        else ret[i] = dp[1];
    }
    */
    for(int i = 1; i <= p; i++){
        for(int j = 1; j <= sqrt(pi[i]); j++){
            if((pi[i]%j) == 0){
                if(pi[i] != j){
                    ret[i] += dp[j];
                    if(pi[i]/j != j){
                        if(pi[i]/j == pi[i]) ret[i] += dp[pi[i]/j]-1;
                        else ret[i] += dp[pi[i]/j];
                    }
                }
                else if(pi[i] == j){
                    ret[i] += dp[j]-1;
                }
            }
        }
    }
    for(int i = 1; i <= p; i++) printf("%d\n", ret[i]);
}