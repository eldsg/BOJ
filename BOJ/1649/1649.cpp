#include<cstdio>
int path[1001][1001];
int via[1001];
int ret[1001][1001];
int main(){
	int t, tt;
	scanf("%d%d", &t, &tt);
	for(int i = 1; i <= t; i++){
		for(int j = 1; j <= t; j++){
			if(i==j) path[i][j] = 0;
			else path[i][j] = 1e9;
		}
	}
	for(int s = 1; s <= tt; ++s){
		int a, b;
		scanf("%d%d", &a, &b);
		path[a][b] = 0;
		ret[a][b]++;
	}
	for(int k = 1; k <= t; k++){
		for(int i = 1; i <= t; i++){
			if(i==k)continue;
			for(int j = 1; j <= t; j++){
				if(j==k)continue;
				if(path[i][j] >= path[i][k] + path[k][j]){
					if(path[i][k] != 1e9 && path[k][j] != 1e9){
						ret[i][j]++;
						path[i][j] = path[i][k] + path[k][j];
					}
				}
			}	
		}
	}
	int a, b, c;
	int ret
	scanf("%d%d%d", &a, &b, &c);
	for(int i = 0; i < c; i++) scanf("%d", via+i);
	
	for(int i = 1; i <= t; i++){
		for(int j = 1; j <= t; j++){
			printf("%d ", ret[i][j]);
		}
		printf("\n");
	}
}
