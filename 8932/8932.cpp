#include<cstdio>
#include<cmath>

double count[8][4] = { {9.23076, 26.7, 1.835}, {1.84523, 75, 1.348}, {56.0211, 1.5, 1.05}, {4.99087, 42.5, 1.81}
	, {0.188807, 210, 1.41}, {15.9803, 3.8, 1.04}, {0.11193, 254, 1.88} };
int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		double a[8];
		int result = 0;
		for(int i = 0; i<7; i++){
			scanf("%lf", &a[i]);
			double temp;
			if(i == 0 || i == 3 || i == 6){
				temp = count[i][1]-a[i];
				result += count[i][0] * pow(temp, count[i][2]);
			}
			else{
				temp = a[i] - count[i][1];
				result += count[i][0] * pow(temp, count[i][2]);
			}
		}
		printf("%d\n", result);
	}
}
