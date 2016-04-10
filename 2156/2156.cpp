#include <iostream>
using namespace std;
#define MAX(a,b) (a>b?a:b)

int main(){
	int sum = 0, max, podo, i,j, podoV[10001], temp[10001];
	cin >> podo;
	for (i = 0; i < podo; i++){
		cin >> podoV[i];
	}
	temp[0] = podoV[0];
	temp[1] = temp[0]+podoV[1];
	max = MAX(temp[0], temp[1]);
	for (i = 2; i < podo; i++){
		temp[i] = podoV[i] + MAX(temp[i - 2], temp[i - 3] + podoV[i - 1]);
		temp[i] = MAX(temp[i], temp[i - 1]);
		max = MAX(max, temp[i]);
	}
	cout << max << endl;
}