#include <cstdio>
#include <cstdlib>

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		int c;
		unsigned long long n, result;
		scanf("%lld %d", &n, &c);
		if(!(n%c)) result = n/c;
		else result = n/c+1;
		printf("%lld\n", result);
	}
}
