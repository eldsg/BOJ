#include <iostream>

using namespace std;

int main(){
	int *fibo;
	int fibo1[50][2];
	int size;
	int i;
	cin >> size;
	fibo = new int[size];
	fibo1[0][0] = 1;
	fibo1[0][1] = 0;
	fibo1[1][0] = 0;
	fibo1[1][1] = 1;
	for (i = 2; i < 41; i++){
		fibo1[i][0] = fibo1[i - 2][0] + fibo1[i - 1][0];
		fibo1[i][1] = fibo1[i - 2][1] + fibo1[i - 1][1];
		}
	for (i = 0; i < size; i++){
		cin >> fibo[i];
	}
	for (i = 0; i < size; i++){
		cout << fibo1[fibo[i]][0] << " " << fibo1[fibo[i]][1] << endl;
	}
}
