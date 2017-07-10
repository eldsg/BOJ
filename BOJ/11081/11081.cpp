#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200000;
pair<pair<int, int>, int> pa[MAXN+20];
int ret[MAXN+1];
int parent[MAXN+1];
int size[MAXN+1];
int ran[MAXN+1];
bool chk[MAXN+1];
int n, m;
vector<pair<int, int> > rett;
bool comp(pair<int, int> &a, pair<int, int> &b){
	if(a.first == b.first) return a.second < b.second;
	return a.first > b.first;
}
int find(int p){
	if(parent[p] == p) return p;
	else return parent[p] = find(parent[p]);
}
void init(){
	for(int i = 0; i < n; i++){
		parent[i] = i;
		size[i] = 1;
		ran[i] = 0;
		ret[i] = 0;
	}
}
void merge(int p, int q, int c){
	p = find(p);
	q = find(q);
	if(p == q) {
		ret[p] += c;
		return ;
	}

	//printf("%d %d %d %d\n", p, q, ran[p], ran[q]);
	if(p < q) swap(p, q);
	if(ran[q] >= ran[p]) {
		parent[p] = q;
		ret[q] += ret[p]+c;
		size[q] += size[p];
		if(size[q] > 7){
			chk[q] = chk[p] = true;
		}
	}
	else{
	 	parent[q] = p;
	 	ret[p] += ret[q]+c;
	 	size[p] += size[q];
	 	if(size[p] > 7) chk[q] = chk[p] = true;
	}
	if(ran[p] == ran[q]) ran[p]++;
}

int main(){
	scanf("%d%d", &n, &m);
	init();
	for(int i = 0; i < m; i++){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		pa[i] = {{a, b}, c};
	}
	sort(pa, pa+m);
	for(int i = 0; i < m; i++){
		merge(pa[i].first.first, pa[i].first.second, pa[i].second);
		//printf("%d %d\n", pa[i].first.first, pa[i].first.second);
		//for(int j = 0; j < n; j++) printf("%d %d %d\n", parent[j], size[j], ret[j]);
		//puts("");
	}
	for(int i = 0; i < n; i++){
		if(size[i] == 7 && !chk[i]){
			rett.push_back({ret[i], parent[i]});
		}
		//printf("%d %d %d\n", parent[i], size[i], ret[i]);
	}
	if(rett.empty()){
		printf("There is currently no threat to Earth\n");
	}
	else{
		sort(rett.begin(), rett.end(), comp);
		for(int i = 0; i < rett.size(); i++){
			printf("%d %d\n", rett[i].second, rett[i].first);
		}
	}
}