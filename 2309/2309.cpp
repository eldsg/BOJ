#include <iostream>
#include <algorithm>
using namespace std;
int PrintCombi(int*arr, int N){
	int i, j, sum = 0, temp1;
	for (i = 0; i < N; i++){
		sum += arr[i];
	}
	if (sum == 100){
		sort(arr, arr + 7);
		for (i = 0; i < N; i++){
			cout << arr[i] << endl;
		}
	}
	return 0;
}
void Combi(int *set, int *arr, int setsize, int arrsize, int C){
	int sum1 = 0;
	if (arrsize == 0){
		sum1 = PrintCombi(arr, C);
		return;
	}
	if (setsize < arrsize) return;
	else{
		arr[arrsize - 1] = set[setsize - 1];
		Combi(set, arr, setsize - 1, arrsize - 1, C);
		Combi(set, arr, setsize - 1, arrsize, C);
	}
}
int main(){
	int shor[10], i, sum2= 0;
	int temp[10];
	for (i = 0; i < 9; i++){
		cin >> shor[i];
		temp[i] = shor[i];
	}
	Combi(shor, temp, 9, 7, 7);
}