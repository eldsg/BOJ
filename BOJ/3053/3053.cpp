#include <stdio.h>
#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
int main(){
	int a;
	double b,c;
	scanf("%d", &a);
	b = a*a*M_PI;
	c = a*a*2.0;
	printf("%.6f\n%.6f\n", b, c);
}