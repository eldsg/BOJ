#include<stdio.h>

int main(){
	int num, snum, sol[500001];
	scanf("%d", &num);
	for(int i = 1; i<=num; i++){
		scanf("%d", &sol[i]);
	}
	scanf("%d", &snum);
	while(snum--){
		int a, b, c, result= 0;
		scanf("%d", &a);
		if(a == 1){
			scanf("%d %d", &b, &c);
			sol[b] += c;
		}
		else{
			scanf("%d", &b);
			for(int i = 1; i<=num; i++){
				result+= sol[i];
				if(result >= b){
					printf("%d\n", i);
					break;
				}
			}
		}
	}
	
}
