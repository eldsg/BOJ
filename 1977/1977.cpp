#include<math.h>
#include<stdio.h>
int main(){
	float a, b;
	scanf("%f %f", &a, &b);
	int c = sqrt(a);
	int d = sqrt(b);
	int result = 0;
	int min = 0;
	for (int i = c; i <= d; i++){
		if (pow((float)i, 2) >= a && pow((float)i, 2) <= b){
			result += pow((float)i, 2);
			if (min == 0) min = pow((float)i, 2);
		}
	}
	if (!result && !min) puts("-1");
	else printf("%d\n%d\n", result, min);
}