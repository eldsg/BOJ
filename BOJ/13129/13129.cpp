#include<cstdio>

int main(){
	int a, b, c, ret;
	scanf("%d %d %d", &a, &b, &c);
	ret = b + a*c;
	printf("%d ", ret);
	for(int i = 1; i<c; i++){
		printf("%d ", ret+=b);
	}
	printf("\n");
}
