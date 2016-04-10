#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	while (T--){
		int a, b, i;
		cin >> a >> b;
		int t = a;
		for (i = 0; i < b-1; i++){
			a = (a*t) % 10;
		}
		if (a == 0) cout << a + 10 << endl;
		else cout << a << endl;
	}
}