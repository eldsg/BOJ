#include <iostream>
using namespace std;

int main(){
	int arr[128][128] = { 0 };//사각형을 그릴 배열
	int i, j, cnt;
	int x1[5], y1[5], x2[5], y2[5];
	for (i = 0; i < 4; i++){
		cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
	}
	for (i = x1[0]; i < x2[0]; i++){
		for (j = y1[0]; j < y2[0]; j++){
			arr[i][j] = 1;
		}
	}
	for (i = x1[1]; i < x2[1]; i++){
		for (j = y1[1]; j < y2[1]; j++){
			arr[i][j] = 1;
		}
	}
	for (i = x1[2]; i < x2[2]; i++){
		for (j = y1[2]; j < y2[2]; j++){
			arr[i][j] = 1;
		}
	}
	for (i = x1[3]; i < x2[3]; i++){
		for (j = y1[3]; j < y2[3]; j++){
			arr[i][j] = 1;
		}
	}
	cnt = 0;
	for (i = 0; i < 100; i++){
		for (j = 0; j < 100; j++){
			if (arr[i][j] == 1){ cnt++; }
		}
	}
	cout << cnt;
}