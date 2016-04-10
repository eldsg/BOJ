#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b){
	return a > b;
}
bool compare2(int a, int b){
	return a < b;
}

int main(){
	int t, i, a[51], b[51];
	long long int c = 0;
	cin >> t;
	for (i = 0; i < t; i++){
		cin >> a[i];
	}
	for (i = 0; i < t; i++){
		cin >> b[i];
	}
	sort(a, a + t, compare);
	sort(b, b + t, compare2);
	for (i = 0; i < t; i++){
		c += a[i] * b[i];
	}
	cout << c << endl;

}