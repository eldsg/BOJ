
int bionom[3001][3001];

int getBinom(int n, int k){
	int i, j;
	for(i = 0; i <= n; i++){
		for(j = 0; j <= min(i, k); j++){
			if(j==0 || j==i){
				bionom[i][j] = 1;
			}
			else
				bionom[i][j] = (bionom[i-1][j-1]+bionom[i-1][j])%MOD;
		}
	}
	return bionom[n][k];
}



