#include<cstdio>
#include<queue>

using namespace std;

int mx[4] = {1, -1, 0, 0};
int my[4] = {0, 0, 1, -1};

bool visit[1002][1002][2];
int mi[1002][1002];
queue<pair<int, int> > M;

int main(){
	int n, m, ret = 1;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%1d", &mi[i][j]);	
		}
	}
	/*
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d", mi[i][j]);
		}
		puts("");
	}
	*/
	bool check = false;
	visit[1][1][0] = true;
	M.push(make_pair(10000*1+1, false));
	while(!M.empty()){
		int s = M.size();
		while(s--){
			int cx = M.front().first%10000;
			int cy = M.front().first/10000;
			int cbroke = M.front().second;
			if(cy == n && cx == m){
				printf("%d\n", ret);
				return 0;
			}
			M.pop();
			for(int i = 0; i < 4; i++){
				int nx = cx+mx[i];
				int ny = cy+my[i];
				int nbroke = cbroke;
				if(nx <= 0 || ny <= 0 || nx > m || ny > n) continue;
				if(visit[ny][nx][nbroke]) continue;
				if(mi[ny][nx]){
					if(nbroke) continue;
					nbroke = 1;
				}
				visit[ny][nx][nbroke] = true;
				M.push(make_pair(ny*10000+nx, nbroke));
			}
		}
		ret++;
	}
	puts("-1");
}
