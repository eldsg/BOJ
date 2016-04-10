#include<stdio.h>
int main(){
	double a[3], b[3], c[3], min=10000;
	scanf("%lf %lf %lf", &a[0], &a[1], &a[2]);
	scanf("%lf %lf %lf", &b[0], &b[1], &b[2]);
	for (int i = 0; i < 3; i++){
		c[i] = a[i] / b[i];
		if (min > c[i]) min = c[i];
	}
	printf("%lf %lf %lf", a[0]-b[0]*min,a[1]-b[1]*min,a[2]-b[2]*min);

}