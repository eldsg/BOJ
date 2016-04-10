#include<stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int result = 0;
	while(1){
        int bb= 0;
		for(int i = a; i; i/=2){
			bb+= i&1;
		}
		if(bb<=b) break;
		result++;
		a++;
	}
	printf("%d", result);
}
