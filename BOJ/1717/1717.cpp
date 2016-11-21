#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

struct DisjointSet{
	vector<int> parent, rank;
	DisjointSet(int n): parent(n+1), rank(n, 1) {
		for(int i = 1; i <= n; i++){
			parent[i] = i;
		}
	}
	int find(int u) {
		if(u == parent[u]) return u;
		return parent[u] = find(parent[u]);
	}
	void merge(int u, int v){
		u = find(u); v=find(v);
		if(u==v) return;
		if(rank[u] > rank[v]) swap(u, v);
		parent[u] = v;
		if(rank[u] == rank[v]) rank[v]++;
	}
};

int main(){
	int num, query;
	scanf("%d %d", &num, &query);
	DisjointSet ret(num);
	while(query--){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(a){
			int k = ret.find(b);
			int t = ret.find(c);
			if(k==t) printf("yes\n");
			else printf("no\n");
		}
		else{
			ret.merge(b, c);
		}
	}
}
