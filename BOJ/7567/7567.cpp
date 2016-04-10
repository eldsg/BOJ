#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	cin >> a;
	int result = 10;
	int b = a.length();
	for (int i = 0; i < b-1; i++){
		if (a[i] != a[i + 1]) result += 10;
		else result += 5;
	}
	cout << result;
}