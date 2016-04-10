#include <iostream>
using namespace std;
int a, b[1000], c[1001];
int main(){
	int i, j, k;
	for (i = 1; i < 45; i++){
		b[i] = i*(i + 1) / 2;
	}
	for (i = 1; i < 45; i++){
		for (j = i; j < 45; j++){
			for (k = j; k < 45; k++){
				if (b[i] + b[j] + b[k] < 1001){
					c[b[i] + b[j] + b[k]] = 1;
				}
			}
		}
	}
	for (cin >> a; a--;){
		cin >> k;
		cout << c[k] << endl;
	}

}