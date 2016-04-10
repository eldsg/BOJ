#include<iostream>
using namespace std;

int main(){
	int A[11], temp = 0, max = 0, j;
	for (int i = 1; i < 10; i++){
		cin >> A[i];
		temp = A[i];
		if (temp > max){
			max = temp;
			j = i;
		}
	}
	cout << max << endl;
	cout << j << endl;
}