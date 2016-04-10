#include <iostream>
#include <algorithm>
using namespace std;
int min3(int a, int b, int c){
	int temp = a;
	if (temp > b) temp = b;
	if (temp > c) temp = c;
	return temp;
}
int main(){
	int house;
	int color[1001][4];
	int dp[1001][4];
	dp[0][1] = 0, dp[0][2] = 0, dp[0][3] = 0;
	cin >> house;
	for (int i = 1; i <= house; i++){
		for (int j = 1; j <= 3; j++){
			cin >> color[i][j];
		}
	}
	for (int i = 1; i <= house; i++){
		for (int j = 1; j <= 3; j++){
			if (j == 1) dp[i][j] = min(dp[i - 1][2], dp[i - 1][3]) + color[i][j];
			else if (j == 2) dp[i][j] = min(dp[i - 1][1], dp[i - 1][3]) + color[i][j];
			else if (j == 3) dp[i][j] = min(dp[i - 1][1], dp[i - 1][2]) + color[i][j];
		}
	}
	int result = min3(dp[house][1], dp[house][2], dp[house][3]);
	cout << result << endl;
}