#include <iostream>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while (t--){
		int num[1001], count1 = 0, k = 1, i = 1;
		cin >> n;
		for (int j = 1; j <= n; j++){
			cin >> num[j];
		}
		for (k = 1; k <= n; k++){
			int temp;
			i = k;
			while (1){
				if (num[i] == 0) break;
				if (k == num[i]){
					count1++;
					break;
				}
				else {
					temp = i;
					i = num[i];
					num[temp] = 0;
				}
			}
		}
		cout << count1 << endl;
	}
}