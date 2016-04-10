#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	int d = 0;
	cin >> a >> b >> c;
	if (b + c >= 60){
		a += (b + c) / 60;
		d += (b + c) % 60;
	}
	else d = b + c;
	if (a > 23)	a = a - 24;
	cout << a << " " << d;
}