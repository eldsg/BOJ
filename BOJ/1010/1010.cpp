#include <iostream>
#include <string>
using namespace std;

int main(){
	int testcase;
	cin >> testcase;
	while (testcase != 0){
		int a, b,c,d;
		unsigned long long int result1 = 1, result2 = 1 ,result3=1;
		cin >> a >> b;
		if (a == b){
			cout << 1 << endl;
			testcase--;
			continue;
		}
		c = b - a;
		d = b - c;
		if (c > a){
			while (b != c){
				result1 *= b;
				b--;
			}
			while (a != 0){
				result2 *= a;
				a--;
			}
		}
		else {
			while (b != a){
				result1 *= b;
				b--;
			}
			while (c != 0){
				result2 *= c;
				c--;
			}
		}
		result3 = result1 / result2;
		cout << result3 << endl;
		testcase--;
	}
}