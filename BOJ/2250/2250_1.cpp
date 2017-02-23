#include<cstdio>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

vector<vector<pair<int, int> > >tree;
vector<int> level;
vector<int> index;
vector<vector<int> > ret;
queue<pair<int,int> > bfs;
int parent[10001];
bool isLeft[10001];
int cnt = 0;
int lastlevel = 0;
void dfs(int root){
	int size = tree[root].size();
	for(int i = 0; i < size; i++){
		int next = tree[root][i].first;
		cnt++;
		dfs(next);
	}
}
void setlevel(int root, int lev){
	lastlevel = max(lastlevel, lev);
	level[root] = lev;
	int size = tree[root].size();
	for(int i = 0; i < size; i++){
		int next = tree[root][i].first;
		setlevel(next, lev+1);
	}
}
int leftdfs(int root){
	cnt = 0;
	int size = tree[root].size();
	for(int i = 0; i < size; i++){
		if(tree[root][i].second){
			cnt = 1;
			dfs(tree[root][i].first);
		}
	}
	return cnt;
}
int rightdfs(int root){
	cnt = 0;
	int size = tree[root].size();
	for(int i = 0; i < size; i++){
		if(!tree[root][i].second){
			cnt = 1;
			dfs(tree[root][i].first);
		}
	}
	return cnt;
}

int findroot(int n){
	if(parent[n] == 0) return n;
	return findroot(parent[n]);
}

int main(){
	int n;
	scanf("%d", &n);
	tree.resize(n+1);
	level.resize(n+1);
	index.resize(n+1);
	ret.resize(n+1);
	for(int i = 0; i < n; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(b!=-1){
			tree[a].push_back(make_pair(b, 1));
			parent[b] = a;
			isLeft[b] = true;
		}
		if(c!=-1){
			tree[a].push_back(make_pair(c, 0));
			parent[c] = a;
		}
	}
	int root = findroot(n);
//	printf("root : %d\n", root);
	setlevel(root, 1);
	int size = tree[root].size();
	for(int i = 0; i < size; i++) bfs.push(tree[root][i]);
	while(!bfs.empty()){
		int i = bfs.front().first;
		bfs.pop();
		int size = tree[i].size();
		for(int j = 0; j < size; j++) bfs.push(tree[i][j]);
		if(isLeft[i]){
			int r = rightdfs(i);
			index[i] = index[parent[i]] - r -1;
		}
		else{
			int l = leftdfs(i);
			index[i] = index[parent[i]] + l +1;
		}
	}
	for(int i = 1; i <= n; i++){
	//	printf("%d %d %d\n", i, index[i], level[i]);
		ret[level[i]].push_back(index[i]);
	}
	int rl = 1;
	int rm = 1;
	for(int i = 1; i <= lastlevel; i++){
		int size = ret[i].size();
		if(size >= 2){
			sort(ret[i].begin(), ret[i].end());
			if(ret[i][size-1]-ret[i][0]+1 > rm){
		//		printf("%d %d\n", ret[i][size-1], ret[i][0]);
				rm = ret[i][size-1]-ret[i][0]+1;
				rl = i;
			}
		}
	}
	printf("%d %d\n", rl, rm);
}
