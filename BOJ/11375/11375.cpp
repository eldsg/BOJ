#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int> > bg;

bool visit[1001];
int backMatch[1001];

bool dfs(int now){
	if(visit[now]) return false;
	visit[now] = true;
	for (int i = 0; i< bg[now].size(); i++){
		int next = bg[now][i];
		if(backMatch[next] == -1 || dfs(backMatch[next])){
			backMatch[next] = now;
			return true;
		}
	}
	return false;
}

int solve(){
	memset(backMatch, -1, sizeof(backMatch));
	int match = 0;
	for(int i = 0; i < bg.size(); i++){
		memset(visit, 0, sizeof(visit));
		if(dfs(i)) match++;
	}
	return match;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = 0; i<a; i++){
		vector<int> temp;
		bg.push_back(temp);
		int c, d;
		scanf("%d", &c);
		for(int j = 0; j < c; j++){
			scanf("%d", &d);
			bg[i].push_back(d-1);
		}
	}
	printf("%d\n", solve());
}
