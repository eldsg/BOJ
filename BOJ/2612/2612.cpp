#include <bits/stdc++.h>

using namespace std;

int dp[1024][1024];
pair<int, int> p[1001][1001];
char str[1001], str2[1001];

int main(){
	int a, b, ret = -1;
	pair<int, int> retp;
	scanf("%d%s%d%s", &a, str+1, &b, str2+1);
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			if(str[i] == str2[j]) dp[i][j] = 3, p[i][j] = {i, j};
			int t = dp[i-1][j-1] + (str[i] ^ str2[j] ? -2 : 3);
			if(t > dp[i][j]) {
				dp[i][j] = t;
				p[i][j] = p[i-1][j-1];
			}
			if(dp[i][j] < dp[i-1][j]-2){
				dp[i][j] = dp[i-1][j]-2;
				p[i][j] = p[i-1][j];
			}
			if(dp[i][j] < dp[i][j-1]-2){
				dp[i][j] = dp[i][j-1]-2;
				p[i][j] = p[i][j-1];
			}
			if(dp[i][j] > ret){
				ret = dp[i][j];
				retp.first = i;
				retp.second = j;
			}
		}
	}
	str[retp.first+1] = 0;
	str2[retp.second+1] = 0;
	printf("%d\n%s\n%s\n", ret, str+p[retp.first][retp.second].first, str2+p[retp.first][retp.second].second);
}