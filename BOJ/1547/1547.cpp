#include<cstdio>

int main(){
	int t;
	int g[3] = { 1, 0, 0 };
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		g[a-1] ^= g[b-1];
		g[b-1] ^= g[a-1];
		g[a-1] ^= g[b-1];
	}
	for(int i = 0; i < 3; i++){
		if(g[i] == 1){
			printf("%d\n", i+1);
			break;
		}
	}
}
