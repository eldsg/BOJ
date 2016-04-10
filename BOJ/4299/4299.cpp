#include <iostream>
using namespace std;

int main(){
	int a, b, temp, x, y;
	cin >> a >> b;
	x= (a + b) / 2;
	y = (a-b) / 2;
	if (a < b || x + y != a || x - y != b){
		cout << -1 << endl;
		return 0;
	}
	cout << x << " " << y << endl;
}