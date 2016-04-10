#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
	int size, i, j, k, d = 0, b;
	cin >> size;
	char passw[512][64];
	char temp[512][64];
	for (i = 0; i < size; i++){
		cin >> passw[i];
	}
	for (i = 0; i < size; i++){
		strcpy(temp[i], passw[i]);
	}
	for (i = 0; i < size; i++){
		int k = 0;
		b = strlen(temp[i]);
		for (j = b - 1; j >= 0; j--){
			passw[i][k] = temp[i][j];
			k++;
		}
	}
	for (i = 0; i < size; i++){
		for (j = 0; j < size; j++){
			if (strcmp(temp[i], passw[j]) == 0) {
				d = strlen(temp[i]);
				cout << d << " " << temp[i][d / 2] << endl;
				return 0;
			}
		}
	}
	return 0;
}