#include <bits/stdc++.h>

using namespace std;

char str[1501];
int dp[26][1501];
int n, t;
int main(){
	scanf("%d\n%s\n%d", &n, str, &t);
	for(int i = 0; i < 26; i++){
		for(int j = 0; j < n; j++){
			int prefix = 0;
			for(int k = j; k < n; k++){
				if((str[k]-'a') != i) prefix++;
				dp[i][prefix] = max(dp[i][prefix], k-j+1);
			}	
		}
		for(int j = 1; j <= n; j++){
			dp[i][j] = max(dp[i][j], dp[i][j-1]);
		}
	}
	while(t--){
		int nu; char c;
		scanf("%d %c", &nu, &c);
		printf("%d\n", dp[c-'a'][nu]);
	}

}