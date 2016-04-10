#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main(){
	int size;
	int num, i, j, k, num2, l, num4= 0, num5 =0;
	cin >> size;
	for (i = 1; i <= size; i++){
		cin >> num;
		num2 = num / 2;
		for (j = 2; j <= (int)sqrt(num2); j++){
			if ((num2) % j == 0) break;
		}
		if (j == (int)sqrt(num2)+1){
			cout << num2 << " " << num2 << endl;
			continue;
		}
		for (j = 1; j < num2; j++){
			for (k = 2; k <= (int)sqrt(num2-j); k++){
				if ((num2 - j) % k == 0) break;
			}
			for (l = 2; l <= (int)sqrt(num2+j) ; l++){
				if ((num2 + j) % l == 0) break;
			}
			if (((int)sqrt(num2 - j)+1 == k && ((int)sqrt(num2 + j)+1 == l))){
				cout << num2 - j << " " << num2 + j << endl;
				break;
			}
		}
	}
}