#include <bits/stdc++.h>

using namespace std;
char str[42];
int dp[45];
int i;
int main(){
	scanf("%s", str);
	dp[0] = 1;
	for(i = 0; str[i]; i++){
		str[i] -= '0';
		if(str[i]){
			dp[i+1] += dp[i];
			if(str[i]*10 + str[i+1]-'0' <= 34) dp[i+2] += dp[i];
		}
	}
	printf("%d\n", dp[i]);
}