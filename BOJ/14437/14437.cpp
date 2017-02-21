#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>

#define MOD 1000000007

int dp[3001] = { 1, };

using namespace std;
int main(){
	int num;
	char str[3001];
	scanf("%d\n%s", &num, str);
	int len = strlen(str);
	for(int i = 0; i < len; i++){
		for(int j = num; j >= 1; j--){
			for(int k = 1; k <= j && k <= 25; k++){
				dp[j] = (dp[j]+dp[j-k]) % MOD;
			}
		}
	}
	printf("%d\n", dp[num]);
}
