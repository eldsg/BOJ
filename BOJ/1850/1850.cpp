#include<cstdio>

long long gcd(long long a, long long b){
	long long c;
	while( a!=0){
		 c=a; a= b%a; b=c;
	}
	return b;
}

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	long long ret = gcd(a, b);
	while(ret--){
		printf("1");
	}
	printf("\n");
}
