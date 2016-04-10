#include<iostream>
#include<stdio.h>
using namespace std;
int testcase;
int ary[1025];
int result[16][1025];
int main(){
	scanf("%d", &testcase);
	int num = 0;
	for (int i = 0; i < testcase; i++){
		num += (1 << i);
	}
	for (int i = 0; i < num; i++){
		scanf("%d", &ary[i]);
	}
	for (int i = 0; i < testcase; i++){
		int plus = 1;
		plus = plus << (testcase - (i));
		for (int j = 0; j < (1 << i); j++){
				printf("%d ", ary[num / (1 << i + 1) + (j)*plus]);
		}
		printf("\n");
	}
}