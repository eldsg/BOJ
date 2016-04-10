#include <iostream>
using namespace std;

int main(){
	int A,B,C;
	cin >> A >> B >> C;
	if (B - A > C - B){
		cout << B - A - 1 << endl;
	}
	else cout << C - B - 1 << endl;
}