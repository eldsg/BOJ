#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int temp = 0;
	int dp[501][501];
	dp[0][0] = 0;
	dp[0][1] = 0;
	cin >> n;
	int k = 1;
	int s = n;
	int num[501][501];
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= k; j++){
				cin >> num[i][j];
			}
			k++;
		}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= k; j++){
			dp[i][j] = max(dp[i - 1][j],dp[i-1][j-1]) + num[i][j];
		}
	}
	for (int i = 1; i <= n; i++){
		if (temp < dp[n][i]) temp = dp[n][i];
	}
	cout << temp;
}