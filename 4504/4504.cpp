#include <stdio.h>
int main(){
	int a,b;
	scanf("%d", &a);
	while (1){
		scanf("%d", &b);
		if (!b) break;
		if (b%a == 0) printf("%d is a multiple of %d.\n", b, a);
		else printf("%d is NOT a multiple of %d.\n", b, a);
	}
}