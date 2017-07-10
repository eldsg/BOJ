#include <bits/stdc++.h>
using namespace std;
vector<int> g[505];
int visit[505];
int previsit[505];

int t, n, m, ret = 1e9;
int bfs(int k){
	int ans = 1e9;
	for(int i = 0; i < n; i++) visit[i] = 1e9;
	visit[k] = 0;
	previsit[k] = -1;
	queue<int> que;
	que.push(k);
	while(!que.empty()){
		int f = que.front();
		que.pop();
		for(auto i : g[f]){
			if(i != previsit[f]){
				if(visit[i] == 1e9){
					visit[i] = visit[f] + 1;
					previsit[i] = f;
					que.push(i);
				}
				else{
					ans = min(ans, visit[f] + visit[i] + 1);
					if(ans == 3) return 3;
				}
			}
		}
	}
	return ans;
}

int main(){
	scanf("%d", &t);
	//scan_int(&t);
	for(int ii = 1; ii <= t; ii++){
		ret = 1e9;
		scanf("%d%d", &n, &m);
	//	scan_int(&n), scan_int(&m);
		for(int i = 0; i < n; i++){
			g[i].clear();
		}
		for(int i = 0; i < m; i++){
			int a, b;
	//		scan_int(&a), scan_int(&b);
			scanf("%d%d", &a, &b);
			g[a].push_back(b);
			g[b].push_back(a);
		}
		if(m == 1) printf("Case %d: ", ii), puts("impossible");
		else{
			for(int i = 0; i < n && ret != 3; i++){
				ret = min(ret, bfs(i));
			}
			printf("Case %d: ", ii);
			if(ret == 1e9) puts("impossible");
			else printf("%d\n", ret);
		}
	}
}