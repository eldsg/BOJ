#include <iostream>
using namespace std;

int main(){
	char a[3], b[3];
	int c = 0, d = 0;
	cin >> a >> b;
	c = (a[2] - 48) * 100 + (a[1] - 48) * 10 + (a[0] - 48);
	d = (b[2] - 48) * 100 + (b[1] - 48) * 10 + (b[0] - 48);
	if (c > d) cout << c << endl;
	else cout << d << endl;
}