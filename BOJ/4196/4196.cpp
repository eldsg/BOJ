#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100001;

int tc, n, m, a, b, cnt, sn;
int dfsn[MAXN+1], p[MAXN+1], o[MAXN+1];
bool f[MAXN+1];
vector<vector<int> > g;
vector<vector<int> > r_scc;
stack<int> st;
int scc(int now){
	dfsn[now] = ++cnt;
	st.push(now);
	int ret = dfsn[now];
	for(auto next : g[now]){
		if(dfsn[next] == 0) ret = min(ret, scc(next));
		else if(!f[next]) ret = min(ret, dfsn[next]);
	}
	if(ret == dfsn[now]){
		vector<int> temp;
		while(1){
			int k = st.top();
			st.pop();
			temp.push_back(k);
			f[k] = true;
			p[k] = sn;
			if(k == now) break;
		}
		r_scc.push_back(temp);
		sn++;
	}
	return ret;
}
void init(){
	sn = cnt = 0;
	g.clear();
	g.resize(n+1);
	r_scc.clear();
	memset(dfsn, 0, sizeof(dfsn));
	memset(f, false, sizeof(f));
	memset(p, 0, sizeof(p));
	memset(o, 0, sizeof(o));
}
int main(){
	scanf("%d", &tc);
	while(tc--){
		scanf("%d%d", &n, &m);
		init();	
		for(int i = 0; i < m; i++){
			scanf("%d%d", &a, &b);
			g[a].push_back(b);
		}
		for(int i = 1; i <= n; i++){
			if(dfsn[i] == 0) scc(i);
		}
		for(int i = 1; i <= n; i++){
			for(auto j : g[i]){
				if(p[i] != p[j]) o[p[j]]++;
			}
		}
		int ret = 0;
		for(int i = 0; i < sn; i++){
			if(o[i] == 0) ret++;
		}
		printf("%d\n", ret);
	}
}