#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > g;
int bc[101];
bool visit[101];
bool dfs(int i){
	if(visit[i]) return false;
	visit[i] = true;
	for(int j = 0; j < g[i].size(); j++){
		int k = g[i][j];
		if(bc[k] == -1|| dfs(k)){
			bc[k] = i;
			return true;
		}
	}
	return false;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		g.assign(101, vector<int>());
		memset(bc, -1, sizeof(bc));
		int n, m, temp;
		scanf("%d%d", &n, &m);
		for(int i = 0; i < m; i++){
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			for(int j = 0; j < c; j++){
				scanf("%d", &temp);

				for(int k = a; k < b; k++){ // a초에 시작해서 b초에 나가면 a <= k < b 까지 전송 받을 수 있음
					g[k].push_back(temp);
				}
			}
		}
		int ret = -1;
		for(int i = 0; i < 101; i++){
			bool chk2 = false;
			memset(visit, false, sizeof(visit));
			dfs(i); // 매칭 
			for(int j = 1; j <= n; j++){
				if(bc[j] == -1) {
					chk2 = true;
					break;
				}
			}
			if(!chk2){
				ret = i + 1;
			 	break;
			}
		}
		printf("%d\n", ret);
	}
}