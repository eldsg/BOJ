#include<cstdio>

int main(){
	unsigned long long int n, div=2;
	scanf("%llu", &n);
	printf("%s\n", n%2 == 0 ? "CY":"SK");
}
