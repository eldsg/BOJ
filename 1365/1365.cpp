#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int elecline[100100]; // 연결되어 있는 전봇대의 수를 저장할배열
	int size, i, j, k = 0, l = 0, size1; // 전봇대 개수
	int count = 0, count1 = 0;
	int temp[100100];
	int temp1 = 0;
	cin >> size;
	for (i = 0; i < size; i++) temp[i] = 1;
	j = 0;
	for (i = 0; i < size; i++){
		cin >> elecline[i];
	}
	temp[1] = elecline[0]; size1 = 1;
	for (i = 1; i < size; i++){
		if (temp[size1] < elecline[i]){
			size1++;
			temp[size1] = elecline[i];
			continue;
		}
		k = lower_bound(temp + 1, temp + size1, elecline[i]) - temp;
		temp[k] = elecline[i];
	}
	
		/*for (i = 1; i < size; i++){
		for (j = 0; j < i; j++){
			if ((elecline[i]>elecline[j]) && (temp[i] < temp[j] + 1)){
				temp[i] = temp[j] + 1;
				if (temp[i] > temp1){
					temp1 = temp[i];
				}
			}
		} 
	}*/ //가장 간단한 LIS값 찾는 알고리즘

	cout << size - size1 << endl;
}