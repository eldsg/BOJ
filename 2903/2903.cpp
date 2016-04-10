#include <iostream>
using namespace std;

int check(int n, int r){
	int i, j = 1;
	for (i = 0; i < r; i++){
		n = n + j;
		j = j * 2;
	}
	return n;
}
int main(){
	int first = 2;
	int next, size;
	cin >> size;
	next = check(first, size);
	cout << next*next;
}