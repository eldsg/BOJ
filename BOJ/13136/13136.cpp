#include <cstdio>
#include <cstdlib>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	unsigned long long int mula, mulb, result;
	if(!(a%c)) mula = a/c;
	else mula = a/c+1;
	if(!(b%c)) mulb = b/c;
	else mulb = b/c+1;
	result = mula*mulb;
	printf("%lld\n", result);
}
