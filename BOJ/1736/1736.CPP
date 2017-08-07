#include <bits/stdc++.h>
using namespace std;
int n, m, ret = 0;
bool trash[101][101];
vector<pair<int, int > >p;

bool comp(pair<int, int> a, pair<int, int> b){
	if(a.first == b.first) return a.second > b.second;
	return a.first < b.first;
}

int main(){
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &trash[i][j]);
			if(trash[i][j]) p.push_back({i,j});
		}
	}
	sort(p.begin(), p.end());
	/*
	for(auto i : p){
		printf("%d %d\n", i.first, i.second);
	}
	puts("");
*/
	bool chk[10010];
	memset(chk, false, sizeof(chk));
	for(int i = 0; i < p.size(); i++){
		if(chk[i]) continue;
		pair<int, int> f = p[i];
		bool chk2 = false;
		chk[i] = true;
		for(int j = 0; j < p.size(); j++){
			if(chk[j]&& j!=i) continue;
			if(!chk2) {
				ret++; chk2 = true;
			}
			if(f.first <= p[j].first && f.second <= p[j].second){
				f = p[j];
				chk[j] = true;
			}
		}
	}
	printf("%d\n", ret);
}