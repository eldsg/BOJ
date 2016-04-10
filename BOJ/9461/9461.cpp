#include <iostream>
#include <algorithm>
using namespace std;
long long int padoban[1000];
long long int pado(int n){
	padoban[0] = 1;
	padoban[1] = 1;
	padoban[2] = 1;
	padoban[3] = 2;
	padoban[4] = 2;
	for (int i = 5; i < 100; i++){
		padoban[i] = padoban[i - 1] + padoban[i - 5];
	}
	return padoban[n-1];
}
int main(){
	long long int testcase, result, N;
	cin >> testcase;
	while (testcase != 0){
		cin >> N;
		result = pado(N);
		cout << result << endl;
		testcase--;
	}
}