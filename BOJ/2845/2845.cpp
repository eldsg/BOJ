#include <iostream>
using namespace std;
int main(){
	int L, P, result;
	int news[5] = { 0 };
	cin >> L >> P;
	result = L*P;
	for (int i = 0; i < 5; i++){
		cin >> news[i];
	}
	for (int i = 0; i < 5; i++){
		cout << news[i] - result << " ";
	}
}