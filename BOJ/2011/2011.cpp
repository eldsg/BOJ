#include<cstdio>
#include<cstdlib>
#include<cstring>

#define mod 1000000

char str[5200];
int dp[5020] = { 1, 1, };

int main(){
	scanf("%s", str);
	int size = strlen(str);
	for(int i =2; i <= size; i++){
		if(str[i-1] > '0') dp[i] = dp[i-1]%mod;
		int temp = (str[i-2]-'0')*10 + str[i-1]-'0';
		if( 10 <= temp && temp <= 26) dp[i] = (dp[i] + dp[i-2]) %mod;
	}
	printf("%d\n", dp[size]);

}

