#include <iostream>
using namespace std;

int main(){
	long double a, b;
	cin >> a >> b;
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(20);
	cout << a / b;
}