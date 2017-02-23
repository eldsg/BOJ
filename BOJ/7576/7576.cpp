#include<vector>
#include<queue>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>

using namespace std;

queue<pair<int, pair<int, int> > > tomato;
int visit[1001][1001];
int m, n;
int mx[4] = {1, 0, -1, 0};
int my[4] = {0, 1, 0, -1};
void bfs(){
	int k = 0;
	while(!tomato.empty()){
		int y = tomato.front().second.first;
		int x = tomato.front().second.second;
		int day = tomato.front().first;
		tomato.pop();
		for(int i = 0; i< 4; i++){
			int ny = y + my[i];
			int nx = x + mx[i];
			if(ny < 0 || ny > n-1 || nx < 0 || nx > m-1) continue;
			if(visit[ny][nx] == 0){
				tomato.push(make_pair(day+1, make_pair(ny, nx)));
				visit[ny][nx] = 1;
			}
		}
		k = max(k, day);
	}
	bool check = false;
	for(int i = 0, j; i < n; i++){
		for(j = 0; j < m; j++){
			if(visit[i][j] == 0){
				check = true;
				break;
			}
		}
	}
	if(check) printf("-1\n");
	else printf("%d\n", k);
}

int main(){
	memset(visit, false, sizeof(visit));
	scanf("%d%d", &m, &n);
	for(int i = 0, j; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &visit[i][j]);
			if(visit[i][j]==1) tomato.push(make_pair(0, make_pair(i,j)));
		}
	}
	bfs();

}
