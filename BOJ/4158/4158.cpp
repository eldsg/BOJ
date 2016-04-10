#include<stdio.h>
int a[1000001];
int main(){
	while (1){
		int b, c, d, count = 0,i,j;
		scanf("%d %d", &b, &c);
		if (!b && !c) break;
		for (i = 0; i < b; i++){
			scanf("%d", &a[i]);
		}
		for (j = i = 0; i < c; i++){
			scanf("%d", &d);
			for (; d > a[j]; j++);
			if (a[j] == d){
				count++;
			}
		}
		printf("%d\n", count);
	}
}