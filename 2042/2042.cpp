#include <iostream>
#include <stdio.h>
using namespace std;
int num[1000000];
int main(){
	long long result = 0, result1 =0;
	int a, b, c, i, t,d;
	scanf("%d %d %d", &a, &b, &c);
	t = b + c;
	for (i = 0; i < a; i++){
		scanf("%d", &num[i]);
		result += num[i];
	}
	while (t--){
		scanf("%d %d %d", &d, &b, &c);
		if (d == 1){
			result = result - num[b - 1] + c;
			num[b - 1] = c;
		}
		else {
			if (c - b+1> b-1 + a - c){
				long long result2 = result;
				for (i = 0; i < b-1; i++){
					result -= num[i];
				}
				for (i = c; i < a; i++){
					result -= num[i];
				}
				printf("%lld\n", result);
				result = result2;
			}
			else{
				for (i = b-1; i < c; i++){
					result1 += num[i];
				}
				printf("%lld\n", result1);
				result1 = 0;
			}
		}
	}
}