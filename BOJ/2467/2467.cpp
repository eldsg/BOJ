#include <iostream>
#include <stdlib.h>
using namespace std;
bool check1(int *arry, int size){
	bool negative = (arry[0] < 0);
	bool positive = (arry[0] > 0);
	for (int i = 0; i < size; i++){
		negative &= (arry[i] < 0);
		positive &= (arry[i] > 0);
		if (negative == false && positive == false) return false;
	}
	return true;
}
int main(){
	bool sign;
	int *liq;			//용액배열
	int size;			//용액의 수
	cin >> size;
	liq = new int[size]; //배열 동적할당
	int i, j;			//인덱스
	int l = 0;
	int index_max;
	int temp, temp2;
	int lt, lt1;
	for (i = 0; i < size; i++){
		cin >> liq[i];
	}
	temp2 = liq[0] + liq[1];
	lt = liq[0];
	lt1 = liq[1];
	if (temp2 < 0){
		temp2 = -temp2;
	}
	sign = check1(liq, size);
	if (sign == true){
		if (liq[0] < 0){
			lt = liq[size - 2];
			lt1 = liq[size - 1];
			cout << lt << " " << lt1;
			return 0;
		}
		else if (liq[0] > 0){
			lt = liq[0];
			lt1 = liq[1];
			cout << lt << " " << lt1;
			return 0;
		}
	}
	else
		i = 0;
		for (l = 0; liq[l] < 0; l++);
		index_max = size - 1;

		for (i = 0; i < l; i++){
			while (liq[index_max] + liq[i] > 0) index_max--;
			for (j = -1; j < 2; j++){
				if (j + index_max > size) continue;
				temp = liq[index_max + j] + liq[i];
				if (abs(temp) < abs(temp2)){
					temp2 = temp;
					lt = liq[i];
					lt1 = liq[index_max + j];
				}
			}
		}
	
	delete liq;
	cout << lt << " " << lt1;
}