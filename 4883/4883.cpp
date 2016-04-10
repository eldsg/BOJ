#include <iostream>
#include <algorithm>
using namespace std;
int min3(int a, int b, int c){
	int temp = a;
	if (temp > b) temp = b;
	if (temp > c) temp = c;
	return temp;
}
int min4(int a, int b, int c, int d){
	int temp = a;
	if (temp > b) temp = b;
	if (temp > c) temp = c;
	if (temp > d) temp = d;
	return temp;
}
int main(){
	int t, result, k = 1;
	while (cin >> t){
		if (t == 0) break;
		int a[100001][4];
		int dp1[100001][4];
		for (int i = 1; i <= t; i++){
			for (int j = 0; j < 3; j++){
				cin >> a[i][j];
			}
		}
		dp1[0][0] = 0;
		dp1[0][1] = 0;
		dp1[0][2] = 0; 
		for (int i = 1; i <= t; i++){
			for (int j = 0; j <= 2; j++){
				if (j == 0) {
					if (i == 1) dp1[i][j] = 10000000;
					else dp1[i][j] = min(dp1[i - 1][0], dp1[i - 1][1]) + a[i][j];
				}
				else if (j == 1) {
					if (i == 1) dp1[i][j] = min3(dp1[i - 1][0], dp1[i - 1][1], dp1[i - 1][2]) + a[i][j];
					else dp1[i][j] = min4(dp1[i][0], dp1[i - 1][0], dp1[i - 1][1], dp1[i - 1][2]) + a[i][j];
				}
				else if (j == 2){
					if (i == 1) dp1[i][j] = a[i][1] + a[i][j];
					else dp1[i][j] = min3(dp1[i][1], dp1[i - 1][1], dp1[i - 1][2]) + a[i][j];
				}
			}
		}
		cout << k << ". " << dp1[t][1] << endl;
		k++;
	}
}