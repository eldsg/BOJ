#include<stdio.h>
#include<iostream>
int main(){
	int a, b;
	scanf("%d/%d", &a, &b);
	while (a>1 || b>1){
		if (a > b){
			printf("R");
			a -= b;
		}
		else{
			printf("L");
			b -= a;
		}
		std::swap(a,b);
	}
	printf("\n");

}