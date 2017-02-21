#include<cstdio>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<algorithm>

using namespace std;

bool visit[10001];

vector<vector<int> >path;
vector<int> tt;
vector<int> cut;
void dfs(int s, int e){
	if(visit[s]) return;
	if(s==e) return;
	for(int i = 0; i<e+1; i++){
		if(path[s][i] != -1){
			tt.push_back(path[s][i]);
			visit[s] = true;
			dfs(i, e);
			visit[s] = false;
		}
	}
	tt.push_back(-1);
}

int main(){
	int a, b, c, mini = 1e9;
	memset(visit, false, sizeof(visit));
	scanf("%d%d%d", &a,&b,&c);
	path.resize(a+1);
	for(int i = 0; i < a+1; i++){
		path[i].resize(a+1);
		for(int j = 0; j < a+1; j++)
			path[i][j] = -1;
	}
	for(int i = 0; i < b; i++){
		int d, e, f;
		scanf("%d%d%d", &d, &e, &f);
		path[d][e] = f;
	}
	dfs(1, a);
	cut.push_back(-1);
	for(int i = 0; i < tt.size(); i++){
		if(tt[i]==-1) cut.push_back(i);
	}
	for(int i =0; i< cut.size()-2; i++){
		int ret = 0;
		for(int j = cut[i]+1; j< cut[i+1]-c; j++){
			ret += tt[j];
		}
		mini = min(ret, mini);
	}
	printf("%d\n", mini);
}
