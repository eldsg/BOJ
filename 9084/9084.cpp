#include <iostream>
using namespace std;

int main(){
	int n, k, t;
	cin >> t;
	while (t--){
		int a[101];
		int dp[10001] = { 1 };
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		cin >> k;
		for (int i = 0; i < n; i++){
			for (int j = a[i]; j <= k; j++){
				dp[j] += dp[j - a[i]];
			}
		}
		cout << dp[k] << endl;
	}
}