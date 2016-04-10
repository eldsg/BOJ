#include <iostream>
using namespace std;
int main(){
	int T, num=0, num1=0;
	cin >> T;
	while (T--){
		char a;
		cin >> a;
		if (a == 'A'){ num++; }
		else num1++;
	}
	if (num > num1) cout << "A" << endl;
	else if (num1 > num) cout << "B" << endl;
	else cout << "Tie" << endl;
}