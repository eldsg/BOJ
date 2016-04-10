#include<iostream>
using namespace std;
char a[12][12];
char d[12][12];
int main(){
	int b, c,e,f, temp =-1, temp1=100000, temp2=-1, temp3=100000;
	for (int i = 0; i < 12; i++){
		for (int j = 0; j < 12; j++){
			a[i][j] = '.';
			d[i][j] = '.';
		}
	}
	cin >> b >> c;
	for (int i = 1; i <= b; i++){
		for (int j = 1; j <= c; j++){
			cin >> a[i][j];
			d[i][j] = a[i][j];
		}
	}
	for (int i = 1; i <= b; i++){
		for (int j = 1; j <= c; j++){
			if (d[i][j] == 'X'){
				if (a[i - 1][j] == '.' && a[i + 1][j] == '.' && a[i][j + 1] == '.') d[i][j] = '.';
				else if (a[i - 1][j] == '.' && a[i + 1][j] == '.' && a[i][j - 1] == '.') d[i][j] = '.';
				else if (a[i - 1][j] == '.' && a[i][j - 1] == '.' && a[i][j + 1] == '.') d[i][j] = '.';
				else if (a[i + 1][j] == '.' && a[i][j - 1] == '.' && a[i][j + 1] == '.') d[i][j] = '.';
			}
		}
	}
	for (int i = 1; i <= b; i++){
		for (int j = 1; j <= c; j++){
			if (d[i][j] == 'X'){
				e = i, f = j;
				if (temp < e){ temp = e; }
				if (temp1 > e){ temp1 = e; }
				if (temp2 < f){ temp2 = f; }
				if (temp3 > f){ temp3 = f; }
			}
		}
	}
	for (int i = temp1; i <= temp; i++){
		for (int j = temp3; j <= temp2; j++){
			cout << d[i][j];
		}
		cout << endl;
	}
}