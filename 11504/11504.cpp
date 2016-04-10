#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int testcase, i, j;
	scanf("%d", &testcase);
	while(testcase--){
		int n, m, a, result = 0, wheel[101];
		char wheelnum[101], cnum1[10], cnum2[10];
		long long int num1 = 0, num2 = 0, temp;
		scanf("%d %d", &n, &m);
		for(i = 0; i < m; i++){
			scanf("%d", &a);
			cnum1[i] = a+'0';
		}
		for(i = 0; i < m; i++){
			scanf("%d", &a);
			cnum2[i] = a+'0';
		}
		cnum1[m] = '\0';
		cnum2[m] = '\0';
		num1 = atoll(cnum1);
		num2 = atoll(cnum2);
		for(i = 0; i < n; i++){
			scanf("%d", &wheel[i]);
		}
		for(i = 0; i < n; i++){
			for(j = 0; j<m; j++){
				wheelnum[j] = wheel[(i+j)%n] + '0';
			}
			wheelnum[m] = '\0';
			temp = atoll(wheelnum);
//			printf("%lld %lld %lld\n", temp, num1, num2);
			if(temp >= num1 && temp <= num2) result++;
		}
		printf("%d\n", result);
	}

}
