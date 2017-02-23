#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstring>

using namespace std;

int parent[100001];
bool visit[100001];
int level[100001];
vector<vector<int> > tree;
void dfs(int n){
	visit[n] = true;
	int size = tree[n].size();
	for(int i = 0; i < size; i++){
		if(visit[tree[n][i]]) continue;
		level[tree[n][i]] = level[n]+1;
		parent[tree[n][i]] = n;
		dfs(tree[n][i]);
	}
}
int proc(int a, int b){
	if(level[a] < level[b]) swap(a, b);
	while(level[a] != level[b]) a = parent[a];
	while(a != b) a = parent[a], b = parent[b];
	return a;
}
int main(){
	int nums;
	scanf("%d", &nums);
	tree.resize(nums+1);
	memset(visit, false, sizeof(visit));
	while(--nums){
		int a, b;
		scanf("%d %d", &a, &b);
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	dfs(1);
	int query;
	scanf("%d", &query);
	while(query--){
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", proc(a, b));
	}
}
