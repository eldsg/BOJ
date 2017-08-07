#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10001;

bool f[MAXN+1];
vector<vector<int> > g;
vector<vector<int> > r_scc;
stack<int> st;
int dfsn[MAXN+1];
int p[MAXN+1];
int n, m, sn, a, b, c;
int scc(int now){
	dfsn[now] = ++c;
	st.push(now);
	int ret = dfsn[now];
	for(auto next : g[now]){
		if(dfsn[next] == 0) ret = min(ret, scc(next));
		else if(!f[next]) ret = min(ret, dfsn[next]);
	}
	if(ret == dfsn[now]){
		vector<int> t;
		while(1){
			int temp = st.top();
			st.pop();
			t.push_back(temp);
			f[temp] = true;
			if(temp == now) break;
		}
		sort(t.begin(), t.end());
		r_scc.push_back(t);
	}
	return ret;
}

int main(){
	scanf("%d%d", &n, &m);
	g.resize(n+1);
	for(int i = 0; i < m; i++){
		scanf("%d%d", &a, &b);
		g[a].push_back(b);
	}
	for(int i = 1; i <= n; i++){
		if(!f[i]) scc(i);
	}
	printf("%d\n", 1*r_scc.size());
	sort(r_scc.begin(), r_scc.end());
	for(auto i : r_scc){
		for(auto j : i){
			printf("%d ", j);
		}
		printf("-1\n");
	}
}