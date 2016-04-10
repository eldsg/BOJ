#include <iostream>
using namespace std;

int main(){
	int i, input, output, temp = 0, totalpeople = 0, max = 0;
	for (i = 0; i < 4; i++){
		cin >> output >> input;
		totalpeople += input - output;
		if (temp < totalpeople){
			temp = totalpeople;
		}
	}
	cout << temp << endl;
}