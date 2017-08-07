//minimum vertex cover

#include <bits/stdc++.h>

using namespace std;

int tc, n, k, m, a, b, ret;
int g[51][51];
bool poss[51];
int stat[51];
void proc(int i, int j){
	if(j >= ret) return ;
	if(i == n+1){
		ret = j;
		return ;
	}
	if(poss[i] || stat[i] != 0){
		proc(i+1, j);
		return ;
	}
	stat[i] = i;
	proc(i+1, j+1);
	stat[i] = -1;
	for(int k = i+1; k <= n; k++){
		if(g[i][k] && stat[k] == 0){
			stat[k] = i;
			j++;
		}
	}
	proc(i+1, j);
	for(int k = i+1; k <= n; k++){
		if(stat[k] == i) stat[k] = 0;
	}
	stat[i] = 0;
	return ;
}

int main(){
	scanf("%d", &tc);
	while(tc--){
		scanf("%d%d%d", &n, &k, &m);
		memset(g, 0, sizeof(g));
		memset(poss, true, sizeof(poss));
		memset(stat, 0, sizeof(stat));
		for(int i = 0; i < m; i++){
			scanf("%d%d", &a, &b);
			g[a][b] = g[b][a] = 1;
			poss[a] = poss[b] = false;
		}
		
		ret = 1e9;
		proc(1, 0);
		if(ret > k) puts("IMPOSSIBLE");
		else printf("%d\n", ret);
	}
}