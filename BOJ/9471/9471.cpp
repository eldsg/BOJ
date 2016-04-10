#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a, b, count = 0;
		scanf("%d %d", &a, &b);
		int fibo1 = 1, fibo2 = 1;
		while (1){
			if (b == 2){
				count = 3;
				break;
			}
			count += 2;
			fibo1 = (fibo1 + fibo2) % b;
			fibo2 = (fibo1 + fibo2) % b;
			if (fibo1 == 1 && fibo2 == 1) break;
		}
		printf("%d %d\n", a, count);
	}

}