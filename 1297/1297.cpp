#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a, b, c,e,g;
	double d, f;
	cin >> a >> b >> c;
	d = sqrt(b*b + c*c);
	f = a / d;
	e = b*f;
	g = c*f;
	cout << e << " " << g << endl;
}