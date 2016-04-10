#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int num[16] = { 0 };
	char num1[16];
	int A, B, C, result, temp;
	cin >> A >> B >> C;
	result = A*B*C;
	temp = result;
	int b = 10;
	sprintf(num1, "%d", temp);
	if (result > 1000000){
		for (int i = 0; i < 10; i++){
			for (int j = 48; j < 58; j++){
				if (int(num1[i]) == j) num[j - 48]++;
			}
		}
	}
	else
	for (int i = 0; i < 9; i++){
		for (int j = 48; j < 58; j++){
			if (int(num1[i]) == j) num[j - 48]++;
		}
	}
	for (int i = 0; i < 10; i++){
		cout << num[i] << endl;
	}
}