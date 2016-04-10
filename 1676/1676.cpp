#include<stdio.h>
int num[501];
int main(){
	int t, k = 0;
	scanf("%d", &t);
	for (int i = 1; i <= 500; i++){
		if (i % 125 == 0) k += 3;
		else if (i % 25 == 0)k += 2;
		else if (i % 5 == 0) k += 1;
		num[i] = k;
	}
	printf("%d", num[t]);
}