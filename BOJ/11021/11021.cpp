#include<cstdio>

int main(){
	int num, a, b;
	scanf("%d", &num);
	for(int i = 0; i<num; i++){
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i+1, a+b);
	}
}
