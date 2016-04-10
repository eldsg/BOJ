#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int i, j, k, n, sq;
	cin >> n;
	sq = sqrt(n);
	for (i = 1; i <= sq; i++){
		if (i*i == n){
			cout << "1";
			return 0;
		}
	}
	for (i = 1; i <= sq; i++){
		for (j = i; j <= sq; j++){
			if (i*i + j*j == n){
				cout << "2";
				return 0;
			}
		}
	}
		for (i = 1; i <= sq; i++){
			for (j = i; j <= sq; j++){
				for (k = j; k <= sq; k++){
					if (i*i + j*j + k*k == n){
						cout << "3";
						return 0;
					}
				}
			}
		}
	cout << "4";
	return 0;
}