#include<cstdio>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

vector<vector<pair<int, int> > >tree;
vector<int> level;
vector<int> index;
vector<vector<int> > ret;
int parent[10001];
bool isLeft[10001];
int k = 1;
int lastlevel = 0;
void setlevel(int root, int lev){
	lastlevel = max(lastlevel, lev);
	level[root] = lev;
	int size = tree[root].size();
	for(int i = 0; i < size; i++){
		int next = tree[root][i].first;
		setlevel(next, lev+1);
	}
}
int findroot(int n){
	if(parent[n] == 0) return n;
	return findroot(parent[n]);
}
void inorder(int n){
	int l = 0, r = 0;
	int size = tree[n].size();
	if(size >= 2){
		l = tree[n][0].first;
		r = tree[n][1].first;
	}
	else if(size == 1){
		if(tree[n][0].second) l = tree[n][0].first;
		else r = tree[n][0].first;
	}
	if(l!=0) inorder(l);
	index[n]= k++;
	if(r!=0) inorder(r);
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
	inorder(root);
	
//	for(int i = 1; i <= n; i++)	printf("%d : %d\n", i, index[i]);
	for(int i = 1; i <= n; i++){
		ret[level[i]].push_back(index[i]);
	}
	int rl = 1;
	int re = 1;
	for(int i = 1; i <= n; i++){
		int size = ret[i].size();
		if(size>=2){
			sort(ret[i].begin(), ret[i].end());
			int k = ret[i][size-1] - ret[i][0] + 1;
			if(k > re) re = k, rl = i;
		}
	}
	printf("%d %d\n", rl, re);
}
