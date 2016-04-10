#include <iostream>
using namespace std;

int main(){
	int box[101][101], testcase, i, j, m, n, count;
	cin >> testcase;
	while (testcase != 0){
		int coun[101] = { 0 };
		cin >> n >> m;
		count = 0;
		for (i = 0; i < n; i++){
			for (j = 0; j < m; j++){
				cin >> box[i][j];
			}
		}
		for (i = n - 1; i >= 0; i--){
			for (j = 0; j < m; j++){
				if (box[i][j] == 1){
					count += n - 1 - i - coun[j];
					coun[j]++;
				}
			}
		}
		testcase--;
		cout << count << endl;
	}
}