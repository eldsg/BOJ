#include<stdio.h>
double a, b;
double result;
int main(){
	while(~scanf("%lf %lf", &a, &b)){
		result = a/b;
		printf("%.2lf\n", result);
	}
}