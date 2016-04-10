#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int i, t,a[302],result[302][3];
	cin >> t;
	for (i = 1; i <= t; i++){
		cin >> a[i];
	}
	result[1][1] = a[1];
	result[1][2] = a[1];
	for (i = 2; i <= t; i++){
		result[i][1] = result[i -1][2] + a[i];
		result[i][2] = max(result[i-2][1], result[i-2][2]) + a[i];
	}
	cout << max(result[t][1], result[t][2]) << endl;
}