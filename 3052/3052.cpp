#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[10],count=0;
	for (int i = 0; i < 10; i++){
		scanf("%d",&a[i]);
		a[i] %= 42;
	}
	sort(a, a + 10);
	for (int i = 0; i < 9; i++){
		if (a[i] == a[i + 1]) a[i] = -1;
	}
	for (int i = 0; i < 10; i++){
		if (a[i] != -1) count++;
	}
	printf("%d", count);
}