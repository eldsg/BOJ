#include<cstdio>
#include<cstdlib>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;

bool visit[1001];
vector< vector<int> >g;
queue<int> que;
void dfs(int start){
	if(visit[start]) return;
	visit[start] = true;
	printf("%d ", start+1);
	for(int i = 0; i<g[start].size(); i++) {
		dfs(g[start][i]);
	}
}
void bfs(int start){
	que.push(start);
	visit[start] = true;
	while(!que.empty()){		
		int front = que.front();
		printf("%d ", front+1);
		que.pop();
		for(int i = 0; i<g[front].size(); i++){
			if(!visit[g[front][i]]){
				que.push(g[front][i]);
				visit[g[front][i]] = true;
			}
		}
	}
}
int main(){
	int a, b, start;
	scanf("%d %d %d", &a, &b, &start);
	for(int i = 0; i<a; i++){
		vector<int> temp;
		g.push_back(temp);
	}
	for(int i = 0; i<b; i++){
		int c, d;
		scanf("%d %d", &c, &d);
		g[c-1].push_back(d-1);
		g[d-1].push_back(c-1);
	}
	for(int i = 0; i<a; i++){
		sort(g[i].begin(), g[i].end());
	}
	dfs(start-1);
	printf("\n");
	memset(visit, false, sizeof(visit));
	bfs(start-1);
}
