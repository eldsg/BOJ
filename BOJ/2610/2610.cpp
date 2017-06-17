#include<cstdio>
#include<vector>
#include<cstring>
#include<cstdlib>
#include<algorithm>

using namespace std;

bool visit[101];
vector<vector<int> >g;
int dist[101][101];
vector<int> temp;
vector<int> cc;
void dfs(int i){
	if(visit[i]) return ;
	visit[i] = true;
	temp.push_back(i);
	int size = g[i].size();
	for(int j = 0; j < size; j++){
		dfs(g[i][j]);
	}
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	g.resize(n+1);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i==j) dist[i][j] = 0;
			else dist[i][j] = 1e9;
		}
	}
	while(m--){
		int a, b;
		scanf("%d%d", &a,&b);
		g[a].push_back(b);
		g[b].push_back(a);
		dist[a][b] = 1;
		dist[b][a] = 1;
	}
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			if(k == i) continue;
			for(int j = 1; j <=n; j++){
				if(k == j || i == j) continue;
				if(dist[i][j] > dist[i][k] + dist[k][j]){
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}
	int index;
	for(int i = 1; i <= n; i++){
		if(!visit[i]){
			dfs(i);
			int	ret = 1e9;
			int size = temp.size();
			for(int j = 0; j < size; j++){
				int m = -1;
				for(int k = 0; k < size; k++){
					if(j==k) continue;
					if(m < dist[temp[j]][temp[k]]){
						m = dist[temp[j]][temp[k]];
					}
				}
				if(ret > m){
					ret = m;
					index = temp[j];
				}
			}
			cc.push_back(index);
			temp.clear();
		}
	}
	sort(cc.begin(), cc.end());
	int size = cc.size();
	printf("%d\n", size);
	for(int i = 0; i < size; i++) printf("%d\n", cc[i]);
}
