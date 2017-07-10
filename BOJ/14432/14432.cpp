#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100000;
vector<vector<int> > g;
int num[MAXN+1];
bool visit[MAXN+1];
long long ret = 0;
void dfs(int n){
	int v = 0;
	for(auto i : g[n]){
		if(visit[i]) continue;
		visit[i] = true;
		dfs(i);
		v = max(v, num[i]);
	}
	num[n] -= v;
	for(auto i : g[n]){
		num[i] -= v;
	}
	ret += v;
}
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	g.resize(n+1);
	for(int i = 0; i < n; i++) scanf("%d", num+i);
	for(int i = 0; i < m; i++){
		int a, b;
		scanf("%d%d", &a, &b);
		g[a-1].push_back(b-1);
		g[b-1].push_back(a-1);
	}
	dfs(0);
	printf("%lld\n", ret);
}