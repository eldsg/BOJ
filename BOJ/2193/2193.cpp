#include <iostream>
using namespace std;

int main(){
	long long int N, two[100];
	cin >> N;
	two[1] = 1;
	two[2] = 1;
	for (int i = 3; i <= 90; i++){
		two[i] = two[i - 1] + two[i - 2];
	}
	cout << two[N] << endl;
}