#include<stdio.h>
long long int number[18][18];
void init(){
	long long int facto = 1;
	for (int i = 0; i <= 17; i++){
		number[i][0] = facto;
		facto *= (i + 1);
		for (int j = 1; j <= i; j++){
			number[i][j] = -1;
		}
	}
}
long long int solve(int a, int b){
	if (number[a][b] > 0) return number[a][b];
	else{
		number[a][b] = solve(a, b - 1) - solve(a - 1, b - 1);
		return number[a][b];
	}
}
int main(){
	int testcase;
	init();
	scanf("%d", &testcase);
	while (testcase--){
		int index, a, b;
		scanf("%d %d %d", &index, &a, &b);
		long long int result = solve(a, b);
		printf("%d %lld\n", index, result);
	}
}