#include <iostream>
using namespace std;
int main(){
	int cnt = 0, temp2 = 0, temp = 0, temp3 = 0, j = 0, i = 0;
	int num[8];
	for (i = 0; i < 5; i++){
		cin >> num[i];
	}
	for (i = 0; i < 5; i++){
		temp3 += num[i];
	}
	for (i = 0; i < 5; i++){
		for (j = i + 1; j < 5; j++){
			if (num[i] > num[j]){
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	cout << temp3 / 5 << endl;
	cout << num[2];
}