#include <iostream>
using namespace std;
int main(){
	int n1, n2;
	cin >> n1 >> n2;
	int n = n2 - n1 + 1;
	cout << n*(n - 1) / 2;
}