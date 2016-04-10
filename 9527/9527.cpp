#include<stdio.h>
long long count(long long n){
	long long res = 0, count;
	for (long long i = 2; i <= n * 2; i <<= 1){
		count = n / i + (n%i ? 1 : 0);
		count *= i / 2;
		if (n%i){
			if (n%i < i / 2) count -= i / 2;
			else count -= count * 2 - n - 1;
		}
		res += count;
	}
	return res;
}
int main(){
	long long a, b, result = 0;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n", count(b)-count(a-1));
}