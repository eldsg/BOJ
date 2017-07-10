#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > g;
int bm[1001];
bool visit[1001];

bool dfs(int i){
	if(visit[i]) return false;
	visit[i] = true;
	for(int j = 0; j < g[i].size(); j++){
		int k = g[i][j];
		if(bm[k] == -1 || dfs(bm[k])){
			bm[k] = i;
			return true;
		}
	}
	return false;
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		g.clear();
		int n, m;
		scanf("%d%d", &n, &m);
		for(int j= 0; j < m; ++j){
			int a, b;
			vector<int> temp;
			g.push_back(temp);
			scanf("%d%d", &a, &b);
			for(int k = a; k <= b; k++){
				g[j].push_back(k-1);
			}
		}
		memset(bm, -1, sizeof(bm));
		int match = 0;
		for(int i = 0; i < g.size(); i++){
			memset(visit, false, sizeof(visit));
			if(dfs(i)) match++;
		}
		printf("%d\n", match);
	}
}