#include <iostream>
#include <string>
using namespace std;

int main(){
	int testcase;
	int x1, y1, r1, x2, y2, r2, r3, r4, dis;
	cin >> testcase;
	while (testcase != 0){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		r3 = (r1 + r2)*(r1 + r2);
		r4 = (r1 - r2)*(r1 - r2);
		dis = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
		if (x1 == x2 && y1 == y2 && r1 == r2){ cout << -1 << endl; }
		else if (r3 < dis || r4 > dis){ cout << 0 << endl; }
		else if (r3 == dis || r4 == dis){ cout << 1 << endl; }
		else if (r4 < dis && r3 >dis){ cout << 2 << endl; }
		testcase--;
	}
}