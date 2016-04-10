#include<stdio.h>
int main(){
	int a, b, c,t;
	scanf("%d%d%d", &a, &b, &c);
	while (a--){
		scanf("%d", &t);
		if (t <= b || t <= c || t*t <= b*b + c*c) printf("DA\n");
		else printf("NE\n");
	}
}