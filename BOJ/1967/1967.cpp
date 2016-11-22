#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cstring>

using namespace std;

vector<vector<pair<int, int> > >tree;
bool visit[10001];
int maxx = -1;
int ret;
void proc(int root, int sum){
	if(sum > maxx) maxx = sum, ret = root;
	visit[root] = true;
	for(int i = 0; i < tree[root].size(); i++){
		if(!visit[tree[root][i].first]) proc(tree[root][i].first, sum+tree[root][i].second);
	}
}

int main(){
	int t;
	scanf("%d\n", &t);
	tree.resize(t+1);
	for(int i = 1; i < t; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		tree[a].push_back(make_pair(b,c));
		tree[b].push_back(make_pair(a,c));
	}
	proc(1, 0);
	memset(visit, false, sizeof(visit));
	maxx = -1;
	proc(ret, 0);
	printf("%d\n", maxx);
}
