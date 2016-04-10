#include <iostream>
using namespace std;

int main(){
	int size;
	cin >> size;
	int i,j;
	for (i = 0; i < size; i++){
		for (j = 0; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
}