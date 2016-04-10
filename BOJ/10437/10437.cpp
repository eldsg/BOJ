#include<stdio.h>

int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(b < c){
			printf("%d 2 %d %d\n", a, b, c);
		}
		else if(c >=4){
			printf("%d 6 1 2 3 %d %d %d\n", a, b+5-c, b+2, b+3);  
		}
		else{
			printf("%d NO PATH\n", a);
		}
	}
}
