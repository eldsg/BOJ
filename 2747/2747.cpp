#include<iostream>
using namespace std;
unsigned long long int num1[50];
int fib(int num){
	num1[0] = 0;
	num1[1] = 1;
	for (int i = 2; i <= 45; i++){
		num1[i] = num1[i - 1] + num1[i - 2];
	}
	return num1[num];
}
int main(){
	int A;
	cin >> A;
	cout << fib(A) << endl;
}