#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	bool check[2] = { false };
	int arry[1000][1000];
	int a,b,o,p;
	int m = 0, n = 0;
	cin >> a;
	cin >> b;
	memset(arry, NULL, sizeof(arry));
	for (int k = a*a; k > 0; k--){
		arry[m][n] = k;
		if (!check[0] && !check[1]){
			m++;
			if (m == a || arry[m][n] != NULL){
				m--, n++;
				check[0] = false;
				check[1] = true;
			}
		}
		else if (!check[0] && check[1]){
			n++;
			if (n == a || arry[m][n] != NULL){
				n--, m--;
				check[0] = true;
				check[1] = true;
			}
		}
		else if (check[0] && check[1]){
			m--;
			if (m == -1 || arry[m][n] != NULL){
				m++, n--;
				check[0] = true;
				check[1] = false;
			}
		}
		else if (check[0] && !check[1]){
			n--;
			if (arry[m][n] != NULL){
				n++,m++;
				check[0] = false;
				check[1] = false;
			}
		}
	}
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++){
			if (arry[i][j] == b) o = i, p = j;
			if (i == a - 1 && j == a - 1){
				cout << arry[i][j];
			}
			else cout << arry[i][j] << " ";

		}
		cout << endl;
	}
	cout << o+1 << " " << p+1;
}