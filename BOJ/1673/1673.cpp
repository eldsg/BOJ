#include <bits/stdc++.h>

int main(){
	int a, b;
	while(scanf("%d%d", &a, &b) != EOF){
		int ret = 0;
		int coupon = a;
		ret += a;
		while(coupon >= b){
			ret += coupon/b;
			coupon = coupon/b + coupon%b;
		}
		printf("%d\n", ret);
	}
}