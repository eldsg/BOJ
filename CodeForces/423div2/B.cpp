#include <bits/stdc++.h>

using namespace std;

vector< pair<int, int> > p;
vector< pair<int, int> > p2;
char str[101][101];
int n, m;
int check(int y, int x, int k){
	int cnt = 0;
	for(int i = y; i < y+k; i++){
		for(int j = x; j < x+k; j++){
			if(str[i][j] == 'W') cnt++;
		}
	}
	return cnt;
}

int main(){
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++) scanf("%s", str[i]);
	for(int i = 0; i < n; i++){
		for(int j = 0; j <m; j++){
			if(str[i][j] == 'B'){
				 p.push_back({i, j});
				 p2.push_back({j, i});	
			}
		}
	}
	if(p.empty()){
		puts("1");
	}
	else{
		sort(p.begin(), p.end());
		sort(p2.begin(), p2.end());
		int maxy = p[p.size()-1].first - p[0].first + 1;
		int maxx = p2[p2.size()-1].first - p2[0].first + 1;
		int kk = max(maxy, maxx);
		//printf("%d\n", kk);
		int ret = 1e9;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){	
				if(i+kk > n || j+kk > m) continue;
				//printf("%d %d %d\n",i, j, check(i, j, kk));
				ret = min(ret, check(i, j, kk));
				//printf("%d\n", ret);
			}
		}
		if(ret == 1e9) puts("-1");
		else printf("%d\n", ret);
	/*
	for(auto i : p){
		printf("%d %d\n", i.first, i.second);
	}
	for(auto i : p2){
		printf("%d %d\n", i.first, i.second);
	}
	*/
	}
}