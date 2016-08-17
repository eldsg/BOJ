#include<cstdio>

int main(){
	int ret = 0, t, a, b;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &a, &b);
		ret += b%a;
	}
	printf("%d\n", ret);
}
