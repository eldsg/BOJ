#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int a[2], b[2], c[2], to=0,to1=0,d,e,f;
	for (int i = 0; i < 2; i++){
		scanf("%d:%d:%d", &a[i], &b[i], &c[i]);
	}
	to += a[0] * 3600 + b[0] * 60 + c[0];
	to1 += a[1] * 3600 + b[1] * 60 + c[1];
	if (to > to1){
		to1 += 24 * 3600;
	}
	to1 -= to;
	d = to1 / 3600, e = (to1 % 3600) / 60, f = (to1 % 3600) % 60;
	if (to1 == 0){
		printf("24:00:00");
	}
	else printf("%02d:%02d:%02d\n", d, e, f);
}