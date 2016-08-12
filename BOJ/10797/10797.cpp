#include<cstdio>

int main(){
	int a, b, ret = 0;
	scanf("%d", &a);
	for(int i = 0; i<5; i++){
		scanf("%d", &b);
		if(a==b) ret++;
	}
	printf("%d\n", ret);
}
