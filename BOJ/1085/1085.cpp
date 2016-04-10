#include <iostream>
using namespace std;

int main(){
	int x, y, w, h, a, b;
	cin >> x >> y >> w >> h;
	a = w - x;
	b = h - y;
	if (x <= y && x <= a && x <= b){ cout << x << endl; }
	else if (y <= x && y <= a && y <= b){ cout << y << endl; }
	else if (a <= y && a <= x && a <= b){ cout << a << endl; }
	else if (b <= y && b <= a && b <= x){ cout << b << endl; }
}