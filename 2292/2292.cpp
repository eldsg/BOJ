#include <iostream>
using namespace std;
int main(){
	int size;
	cin >> size;
	int i = 0, sum = 2;
	while (sum <= size){
		i += 1;
		sum += i * 6;
	}
	cout << i + 1 << endl;
}