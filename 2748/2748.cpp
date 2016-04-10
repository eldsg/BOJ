#include<iostream>
using namespace std;
int main(){
	long long a[100] = { 0, 0, 1, 1, };
	int b;
	cin >> b;
	for (int i = 4; i <= 91; i++){
		a[i] = a[i - 2] + a[i - 1];
	}
	cout << a[b+1] << endl;
}