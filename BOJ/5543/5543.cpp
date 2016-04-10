#include<iostream>
using namespace std;

int main(){
	int temp = 0, temp2 = 10000;
	int burger[5] = { 0 };
	int juice[3] = { 0 };
	for (int i = 0; i < 3; i++){
		cin >> burger[i];
	}
	for (int i = 0; i < 2; i++){
		cin >> juice[i];
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++){
			temp = burger[i] + juice[j];
			if (temp < temp2){
				temp2 = temp;
			}
		}
	}
	cout << temp2 - 50;
}




