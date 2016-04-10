#include <iostream>
using namespace std;

int main(){
	int a[101];
	int dp[10001] = { 1 };
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		for (int j = a[i]; j <= k; j++){
			dp[j] += dp[j - a[i]];
		}
	}
	cout << dp[k] << endl;
}