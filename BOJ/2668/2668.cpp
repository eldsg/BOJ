#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

vector<int> ret;

int p[128];
bool visit[128];
void dfs(int i, int j){
	if(visit[i] && i == j){
		ret.push_back(i);	
		return ;
	}
	if(visit[i]) return;
	visit[i] = true;
	dfs(p[i], j);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) scanf("%d", p+i);
	for(int i = 1; i <= n; i++){
		memset(visit, false, sizeof(visit));
		dfs(i, i);
	}
	int size = ret.size();
	sort(ret.begin(), ret.end());
	printf("%d\n",size);
	for(int i = 0; i < size; i++){
		printf("%d\n", ret[i]);
	}
}
