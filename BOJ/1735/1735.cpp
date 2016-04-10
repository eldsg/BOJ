#include<iostream>
using namespace std;
int gcd(int x, int y){
	int r = x%y;
	if (r == 0)
		return y;
	else return gcd(y, r);
}
int main(){
	int i, j, k, m, a, b, c, d,e;
	cin >> i >> j >> k >> m;
	a = i * m;
	b = j * k;
	e = a + b;
	c = j*m;
	d = gcd(e, c);
	c = c / d;
	e = e / d;
	cout << e << " " << c << endl;
}