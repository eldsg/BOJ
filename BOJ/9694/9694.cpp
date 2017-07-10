#include <bits/stdc++.h>
/* a와 b가 안다는건 단방향이 아닌 양방향 */
/* 경로 역추적은 거지같다 */
using namespace std;

int t;
int g[21][21];
int dist[21][21];
int pre[21][21];
int main(){
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n, m;
		scanf("%d%d", &n, &m);
		memset(g, 0, sizeof(g));
		memset(pre, -1, sizeof(pre));
		memset(dist, 0, sizeof(dist));
		for(int j=0; j<m; j++){
		 	for(int k=0; k<m; k++){
				if(j == k) dist[j][k] = 0;
				else dist[j][k] = 1e9;
			}
		}
		for(int j=0; j<n; j++){
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			g[a][b] = c;
			g[b][a] = c;
			dist[a][b] = c;
			dist[b][a] = c;
			pre[a][b] = a;
			pre[b][a] = b;
		}
		for(int k = 0; k < m; k++){
			for(int ii = 0; ii < m; ii++){
				for(int jj = 0; jj < m; jj++){
					if(ii == jj || ii == k || jj == k) continue;					
					if(dist[ii][k] + dist[k][jj] < dist[ii][jj]){
						//printf("%d %d %d\n", ii, k, jj);
						dist[ii][jj] = dist[ii][k] + dist[k][jj];
						pre[ii][jj] = pre[k][jj];
					}
					if(dist[ii][k] + dist[k][jj] == dist[ii][jj]){
						if(g[k][jj] < g[ii][jj]){
							pre[ii][jj] = pre[k][jj];
						}
					}
				}
			}
		}
		if(dist[0][m-1] != 1e9){
			vector<int> temp;
			temp.push_back(m-1);
			int k = m-1;
			while(pre[0][k] != 0){
				temp.push_back(pre[0][k]);
				k = pre[0][k];
			}
			temp.push_back(0);
			reverse(temp.begin(), temp.end());
			printf("Case #%d:", i);
			for(int j = 0; j < temp.size(); j++) printf(" %d", temp[j]);
			puts("");
		}
		else{
			printf("Case #%d:", i);
			puts(" -1");
		}
	}
}