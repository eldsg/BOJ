#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int size, len;
	cin >> size;
	char A[1024];
	int i;
	for (i = 0; i < size; i++){
		cin >> A;
		len = strlen(A);
		cout << A[0] << A[len - 1] << endl;
	}
}