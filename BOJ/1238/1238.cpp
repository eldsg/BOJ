#include<cstdio>

int g[1001][1001];
int max(int a, int b){
	return a > b ? a : b;
}
int main(){
	int n, m, x;
	scanf("%d%d%d", &n, &m, &x);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i==j) g[i][j] = 0;
			else g[i][j] = 1e9;
		}
	}
	while(m--){
		int s, e, d;
		scanf("%d%d%d", &s, &e, &d);
		g[s][e] = d;
	}
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(g[i][k] + g[k][j] < g[i][j]){
					g[i][j] = g[i][k]+g[k][j];
				}
			}
		}
	}
	int ret = -1;
	for(int i = 1; i <= n; i++){
		ret = max(ret, g[i][x] + g[x][i]);
	}
	printf("%d\n", ret);
}
