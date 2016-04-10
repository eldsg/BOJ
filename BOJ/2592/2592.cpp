#include <iostream>
using namespace std;
int main(){
	int cnt = 0, temp2 = 0, temp = 0, k, temp3 =0, j = 0, i = 0;
	int num[16];
	for (i = 0; i < 10; i++){
		cin >> num[i];
	}
	for (i = 0; i < 10; i++){
		temp3 += num[i];
	}
	for (i = 0; i < 10; i++){
		for (j = i + 1; j < 10; j++){
			if (num[i] == num[j]){
				cnt++;
				temp2 = cnt;
			}
			if (temp2 > temp){
				temp = temp2;
				k = j;
		}
	
		}
	}
	cout << temp3 / 10 << endl;
	cout << num[k];
}