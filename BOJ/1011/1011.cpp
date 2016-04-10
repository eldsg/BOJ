#include <stdio.h>
#include <math.h>
#define ll long long
int main(){
	ll T, a, b;
	scanf("%lld", &T);
	while (T--){
		scanf("%lld %lld", &a, &b);
		ll temp = b - a;
		ll n = 1;
		while (1){
			if (temp == 1) {
				printf("1\n");
				break;
			}
			if (n*n < temp && n*n + n >= temp){
				printf("%lld\n", 2 * n);
				break;
			}
			if (n*n + n < temp && n*n + 2 * n + 1 >= temp){
				printf("%lld\n", 2 * n + 1);
				break;
			}
			n++;
		}
	}
}