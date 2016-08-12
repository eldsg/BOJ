#include<cstdio>

int main(){
	int num, a, b;
	scanf("%d", &num);
	while(num--){
		scanf("%d,%d", &a, &b);
		printf("%d\n", a+b);
	}
}
