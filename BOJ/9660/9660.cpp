#include<cstdio>

int main(){
	unsigned long long n, div = 7;
	scanf("%llu", &n);
	printf("%s\n", (n%div == 0 || n%div == 2) ? "CY" : "SK");
}
