#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdlib>

using namespace std;

vector< vector<int> > build;
bool visit[1024];
int t[1024];
int dfs(int select){
	if(visit[select]) return t[select];
	visit[select] = true;
	int ret = 0;
	for(auto it : build[select]) ret = max(ret, dfs(it));
	return t[select] += ret;
}
int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		build.clear();
		memset(visit, false, sizeof(visit));
		memset(t, 0, sizeof(t));
		int a, b, select;
		scanf("%d %d", &a, &b);
		for(int i = 0; i<a; i++){
			vector<int> temp;
			scanf("%d", &t[i]);
			build.push_back(temp);
		}
		for(int i = 0; i<b; i++){
			int c, d;
			scanf("%d %d", &c, &d);
			build[d-1].push_back(c-1);
		}
		scanf("%d", &select);
		printf("%d\n", dfs(select-1));
	}
}
