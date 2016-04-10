#include<stdio.h>
int main(){
	int t,t1; scanf("%d", &t);
	while (t--){
		int a, b, to=0;	scanf("%d %d", &a, &b);
		while (a--){
			scanf("%d", &t1);
			to += t1 / b;
		}
		printf("%d\n", to);
	}
}