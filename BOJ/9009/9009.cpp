#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int fibo[100000] = { 0, 1 };
void getfibo(){
	for (int i = 2; i < 100000; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
}
int main(){
	getfibo();
	int testcase;
	scanf("%d", &testcase);
	while (testcase--){
		int temp, i, j =0;
		int result[100000];
		scanf("%d", &temp);
		for (i = 0; fibo[i] <= temp; i++);
		if (fibo[i] == temp){
			printf("%d\n", temp);
		}
		else {
			while (1){
				temp -= fibo[i];
				if (temp < 0) temp += fibo[i];
				else if (temp == 0){
					result[j] = fibo[i];
					break;
				}
				else result[j++] = fibo[i];
				i--;
			}
			sort(result, result + j+1);
		}
		for (int k = 0; k < j+1; k++){
			printf("%d ", result[k]);
		}
		printf("\n");
	}
}