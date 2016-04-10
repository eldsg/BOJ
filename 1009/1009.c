#include <stdio.h>
int main(){
	int T;
	scanf("%d", &T);
	while (T--){
		int a, b, i;
		scanf("%d %d", &a, &b);
		int t = a;
		for (i = 0; i < b-1; i++){
			a = (a*t) % 10;
		}
		if (a == 0) printf("%d\n", a+10);
		else printf("%d\n", a);
	}
}