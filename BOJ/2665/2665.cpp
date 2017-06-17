#include<cstdio>
#include<queue>

using namespace std;

typedef struct P{
	int yx;
}P;

int mx[4] = { 0, 0, 1, -1};
int my[4] = { 1, -1, 0, 0};

int room[51][51];
int visit[51][51];
queue<P> ret;

int min(int a, int b){
	return a > b ? b : a;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%1d", &room[i][j]);
			visit[i][j] = 1e9;
		}
	}
	P p = {0};
	ret.push(p);
	visit[0][0] = 0;
	int fi = 1e9;
	while(!ret.empty()){
		int cy = ret.front().yx/1000;
		int cx = ret.front().yx%1000;
		ret.pop();
		for(int i = 0; i < 4; i++){
			int ny = cy + my[i];
			int nx = cx + mx[i];
			if(ny < 0 || nx < 0 || ny > n-1 || nx > n-1) continue;
			if(visit[ny][nx] <= visit[cy][cx]) continue;
			if(room[ny][nx] == 1){
				visit[ny][nx] = visit[cy][cx];

			}
			else visit[ny][nx] = visit[cy][cx]+1;
			ret.push(P{1000*ny+nx});
		}
	}
	printf("%d\n", visit[n-1][n-1]);
}
