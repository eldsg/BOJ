#include <iostream>
using namespace std;

int main(){
	int size;
	cin >> size;
	int i,j;
	for (i = 0; i < size; i++){
		for (int k = 2; k <= size-i; k++){
			cout << " ";
		}
		for (j = 0; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
}