#include<cstdio>

char squ2[51][51];
int squ[51][51];
int main(){
	int n, m, ret = 0, k = 0;
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++){
		getchar();
		for(int j =1; j <= m; j++){
			scanf("%c", &squ2[i][j]);
			squ[i][j] = squ2[i][j]-'0';
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			while(i+k<=n && j+k<=m){
				if(squ[i][j] == squ[i+k][j] && squ[i][j] == squ[i][j+k] && squ[i][j] == squ[i+k][j+k]){
					if(k > ret) ret = k;
				}
				k++;
			}
			k = 0;
		}
	}
	printf("%d\n", (ret+1)*(ret+1));
}
