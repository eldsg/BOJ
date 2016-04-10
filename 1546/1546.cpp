#include<stdio.h>
#include<algorithm>
float a[1000];
int main(){
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) scanf("%f", &a[i]);
	std::sort(a, a + t);
	float max = a[t - 1];
	float result = 0;
	for (int i = 0; i < t; i++){
		a[i] = a[i] / max * 100;
		result += a[i];
	}
	printf("%.2f\n", result / (float)t);
}