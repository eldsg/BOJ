#include <iostream>

using namespace std;

int main(){
	int a, size;
	int temp = 0;
	cin >> size;
	for (a = 1; a <= size; a++){
		temp += a;
	}
	cout << temp;
}