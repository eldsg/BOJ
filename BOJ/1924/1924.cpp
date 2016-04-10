#include <iostream>
#include <string>
using namespace std;
int main(){
	string b[8] = { { "SUN" }, { "MON" }, { "TUE" }, { "WED" }, { "THU" }, { "FRI" }, { "SAT" } };
	string a[13][32];
	int x, y;
	cin >> x >> y;
	for (int j = 1; j <= 31; j++){
			a[1][j] = b[j % 7];
	}
	for (int j = 1; j <= 28; j++){
		a[2][j] = b[(j+3)%7];
	}
	for (int j = 1; j <= 31; j++){
		a[3][j] = b[(j+3)%7];
	}
	for (int j = 1; j <= 30; j++){
		a[4][j] = b[(j + 6) % 7];
	}
	for (int j = 1; j <= 31; j++){
		a[5][j] = b[(j + 1) % 7];
	}
	for (int j = 1; j <= 30; j++){
		a[6][j] = b[(j + 4) % 7];
	}
	for (int j = 1; j <= 31; j++){
		a[7][j] = b[(j + 6) % 7];
	}
	for (int j = 1; j <= 31; j++){
		a[8][j] = b[(j + 2) % 7];
	}
	for (int j = 1; j <= 30; j++){
		a[9][j] = b[(j + 5) % 7];
	}
	for (int j = 1; j <= 31; j++){
		a[10][j] = b[j % 7];
	}
	for (int j = 1; j <= 30; j++){
		a[11][j] = b[(j + 3) % 7];
	}
	for (int j = 1; j <= 31; j++){
		a[12][j] = b[(j + 5) % 7];
	}
	cout << a[x][y] << endl;
}