#include<cstdio>

int tile[1001];
#define div 10007
void init(){
	tile[0] = 1;
	tile[1] = 1;
	for(int i = 2; i<=1000; i++){
		tile[i] = (tile[i-1] + tile[i-2])%div;
	}
}

int main(){
	int a;
	scanf("%d", &a);
	init();
	printf("%d\n", tile[a]);
}
