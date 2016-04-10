#include<iostream>
using namespace std;
int main(){
	double A, B, C, D, totalnum;
	int test, i;
	cin >> test;
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	while (test != 0){
		cin>> i >> A >> B >> C >> D;
		totalnum = (A / (B + C))*D;
		cout << i << " " << totalnum << endl;
		test--;
	}
}