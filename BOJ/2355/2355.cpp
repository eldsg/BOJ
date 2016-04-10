#include <iostream>
using namespace std;

int main(){
	long long int i, j, k, k1;
	cin >> i >> j;
	k = (j*(j+1)) / 2;
	k1 = (i*(i+1)) / 2;
	if (i > j){
		cout << k1 - k + j << endl; return 0;
	}
	cout << k- k1+i << endl;

}