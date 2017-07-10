#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	scanf("%d", &tc);
	while(tc--){
		int n, m, a, b;
		int capacity[201][201];
		memset(capacity, 0, sizeof(capacity));
		scanf("%d%d", &n, &m);
		for(int i = 0; i < m; i++){
			scanf("%d%d", &a, &b);
			if(a > b) continue;
			if(a == 1 || b == n){
				capacity[a-1][b-1] = 1;
			}
			else capacity[a-1][b-1] = n;
		}
		int ret = 0;
		while(1){
			int parent[201];
			memset(parent, -1, sizeof(parent));
			queue<int> que;
			que.push(0);
			while(!que.empty() && parent[n-1] == -1){
				int now = que.front();
				que.pop();
				for(int next = 0; next < n; next++){
					if(capacity[now][next] > 0 && parent[next] == -1){
						que.push(next);
						parent[next] = now;
					}
				}
			}
			if(parent[n-1] == -1) break;
			int u = n-1;
			while(u != 0){
				int now = parent[u];
				int next = u;
				//printf("%d %d\n", now, next);
				capacity[now][next]--;
				capacity[next][now]++;
				u = parent[u];
			}
			ret++;
		}
		printf("%d\n", ret);
	}

}