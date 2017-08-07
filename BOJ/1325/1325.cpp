#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > con;
vector<int> ret;
bool visit[10001];
int k = 0;
int rett = 0;
void dfs(int node){
	if(visit[node]) return ;
	k++;
	visit[node] = true;
	for(auto next : con[node]){
		dfs(next);
	}
}

int main(){
	int n, m, a, b;
	scanf("%d%d", &n, &m);
	con.resize(n+1);
	for(int i = 0; i < m; i++){
		scanf("%d%d", &a, &b);
		con[b-1].push_back(a-1);
	}
	for(int i = 0; i < n; i++){
		memset(visit, false, sizeof(visit));
		k = 0;
		dfs(i);
		if(rett < k){
			rett = k;
			ret.clear();
			ret.push_back(i+1);
		}
		else if(rett == k){
			ret.push_back(i+1);
		}
	}
	for(auto i : ret) printf("%d ", i);
	puts("");
}