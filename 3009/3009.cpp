#include <iostream>
using namespace std;

int main(){
	int dot[4][4];
	int cnt = 0, cnt2 = 0;
	int i, j, x, y;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			cin >> dot[i][j];
		}
	}
	if (dot[0][0] == dot[1][0]){
		x = dot[2][0];
	}
	if (dot[1][0] == dot[2][0]){
		x = dot[0][0];
	}
	if (dot[0][0] == dot[2][0]){
		x = dot[1][0];
	}
	if (dot[0][1] == dot[1][1]){
		y = dot[2][1];
	}
	if (dot[0][1] == dot[2][1]){
		y = dot[1][1];
	}
	if (dot[1][1] == dot[2][1]){
		y = dot[0][1];
	}
	cout << x << " " << y;
}