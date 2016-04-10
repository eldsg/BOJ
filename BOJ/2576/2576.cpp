#include <iostream>
using namespace std;

int main(){
	int odd[16] = { 0 };
	int temp[16] = { 0 };
	int i, j = 0, hap = 0, minodd;
	for (i = 0; i < 7; i++){
		cin >> odd[i];
		if (odd[i] % 2 == 1){
			temp[j] = odd[i];
			j++;
		}
	}
	if (j == 0){
		cout << -1;
		return 0;
	}
	minodd = temp[0];
	for (i = 0; i < j; i++){
		hap += temp[i];
		if (minodd > temp[i]){
			minodd = temp[i];
		}
	}
	cout << hap << endl;
	cout << minodd;
}