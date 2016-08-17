#include <cstdio>

int tile[1001];

#define div 10007

void init(){
	tile[1] = 1;
	tile[2] = 3;
	for(int i = 3; i<=1000; i++){
		tile[i] = (tile[i-1]+ tile[i-2]*2) % div;
	}
}

int main(){
	int num;
	scanf("%d", &num);
	init();
	printf("%d\n", tile[num]);
}
