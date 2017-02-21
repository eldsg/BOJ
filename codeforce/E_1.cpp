#include<cstdio>

int main(){
	int num;
	scanf("%d", &num);
	for(int i = 0, a, b; i < num-1; i++){
		scanf("%d %d", &a, &b);
	}
	if(!(num%2)) printf("%d\n", num/2);
	else printf("-1\n");
}
