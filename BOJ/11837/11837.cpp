#include <bits/stdc++.h>

using namespace std;

vector<string> ret;
queue< pair<int, string> > que;
char mapp[32][32];
bool visit[32][32];
int my[2] = {0, 1};
int mx[2] = {1, 0};
int main(){
	int n, m;
	memset(visit, false, sizeof(visit));
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf(" %1c", &mapp[i][j]);
		}
	}
	que.push({0, "a"});
	while(!que.empty()){
		int ny = que.front().first/31;
		int nx = que.front().first%31;
		string temp = que.front().second;
		visit[ny][nx] = true;
		que.pop();
		if(ny == n-1 && nx == m-1){
			ret.push_back(temp);
			continue;
		}
		for(int i = 0; i < 2; i++){
			int nexty = ny+my[i];
			int nextx = nx+mx[i];
			if(nexty < 0 || nextx < 0 || nextx > m-1 || nexty > n-1 || visit[nexty][nextx]) continue;
			string nextstring = temp+mapp[nexty][nextx];
			que.push({nexty*31+nextx, nextstring});
		}
	}
	scanf("%d", &n);
	sort(ret.begin(), ret.end());
	cout << ret[n-1] << endl;
}