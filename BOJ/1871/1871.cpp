#include<iostream>
#include<cstdlib>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
	int testcase, re1, re2;
	char a[100];
	cin >> testcase;
	while (testcase != 0){
		cin >> a;
		re1 = (a[0] - 65) * 26 * 26 + (a[1] - 65) * 26 + (a[2] - 65);
		re2 = (a[4]-48) * 1000 + (a[5]-48) * 100 + (a[6]-48) * 10 + a[7]-48;
		if (abs(re1 - re2) <= 100) cout << "nice" << endl;
		else cout << "not nice" << endl;
		testcase--;
	}
}