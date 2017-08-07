#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > bg;


bool chk[101][101];
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
	if(a&1) {
		puts("0");
		return 0;
	}
	bg.resize(a+1);
	for(int i = 0; i<b; i++){
		int c, d;
		scanf("%d%d", &c, &d);
		if(chk[c-1][d-1]) continue;
		else{
			bg[c-1].push_back(d-1);
			bg[d-1].push_back(c-1);
			chk[c-1][d-1] = chk[d-1][c-1] = true;
		}
	}
	//printf("%d\n", solve());
	printf("%d\n", solve() == a);
}
