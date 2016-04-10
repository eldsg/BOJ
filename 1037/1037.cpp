#include <iostream>
using namespace std;

int main(){
	int yak[64];
	int size, i, min1 , max1;
	cin >> size;
	for (i = 0; i < size; i++){
		cin >> yak[i];
	}
	min1 = yak[0];
	max1 = yak[0];
	for (i = 0; i < size; i++){
		if (min1 > yak[i]){
			min1 = yak[i];
		}
	}
	for (i = 0; i < size; i++){
		if (yak[i] > max1){
			max1 = yak[i];
		}
	}
	cout << min1 * max1;
}