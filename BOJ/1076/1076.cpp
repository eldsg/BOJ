#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char color[10][3] = { 0 };
	char a[3];
	int b[3];
	char c[100] = { 0 };
	for (int i = 0; i < 3; i++){
		cin >> color[i];
		if (color[i][0] == 'b'){
			if (color[i][1] == 'l'){
				if (color[i][2] == 'a') a[i] = '0', b[i] = 0;
				else a[i] = '6', b[i] = 6;
			}
			else a[i] = '1', b[i] = 1;
		}
		else if (color[i][0] == 'r') a[i] = '2', b[i] = 2;
		else if (color[i][0] == 'o') a[i] = '3', b[i] = 3;
		else if (color[i][0] == 'y') a[i] = '4', b[i] = 4;
		else if (color[i][0] == 'g'){
			if (color[i][1] == 'r'){
				if (color[i][2] == 'e'){
					if (color[i][3] == 'e') a[i] = '5', b[i] = 5;
					else a[i] = '8', b[i] = 8;
				}
			}
		}
		else if (color[i][0] == 'v') a[i] = '7', b[i] = 7;
		else a[i] = '9', b[i] = 9;
	}
	c[0] = a[0], c[1] = a[1];
	for (int i = 2; i < b[2] + 2; i++){
		c[i] = '0';
	}
	if (c[0] == '0' && c[1] == '0') cout << 0 << endl;
	else if (c[0] == '0' && c[1] != '0'){
		for (int i = 1; i < strlen(c); i++) cout << c[i];
		cout << endl;
	}
	else cout << c << endl;
}