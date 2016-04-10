#include <iostream>
using namespace std;

int main(){
	char desk[8][8] = { 0 };
	int i, j;
	int temp = 0;
	for (i = 0; i < 8; i++){
		for (j = 0; j < 8; j++){
			cin >> desk[i][j];
			if (i % 2 == 0 && j % 2 == 0 || i % 2 == 1 && j % 2 == 1){
				if (desk[i][j] == 'F'){
					temp++;
					}
				}
			}
		}
	cout << temp;
}