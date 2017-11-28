#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > ball; // bigger
vector<vector<int> > ball2; // smaller
bool visit[100];
int cnt = 0;
void dfs1(int n){
	visit[n] = true;
	cnt++;
	for(auto i : ball[n]){
		if(!visit[i]) dfs1(i);
	}
	return ;
}
void dfs2(int n){
	visit[n] = true;
	cnt++;
	for(auto i : ball2[n]){
		if(!visit[i]) dfs2(i);
	}
	return ;
}

int main(){
	int n, k, a, b, ret = 0;
	scanf("%d%d", &n, &k);
	ball.resize(n);
	ball2.resize(n);
	for(int i = 0; i < k; i++){
		scanf("%d%d", &a, &b);
		ball[a-1].push_back(b-1);
		ball2[b-1].push_back(a-1);
	}
	for(int i = 0; i < n; i++){
		cnt = 0;
		memset(visit, 0, sizeof(visit));
		dfs1(i);
		if(cnt-1 > n/2) ret++;
		cnt = 0;
		memset(visit, 0, sizeof(visit));
		dfs2(i);
		if(cnt-1 > n/2) ret++;
	}
	printf("%d\n", ret);
}