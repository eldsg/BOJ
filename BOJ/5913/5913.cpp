#include<cstdio>

int m[6][6];
int visit[6][6];
int mx[4] = { 0, 0, 1, -1};
int my[4] = { 1, -1, 0, 0};
int ret = 0;
int size;
void dfs(int y, int x, int c){
	if(y==4 && x == 4){
		if(c==size) ret++;
		return ;
	}
	for(int i = 0; i < 4; i++){
		int ny = y + my[i];
		int nx = x + mx[i];
		if(ny < 0 || nx < 0 || ny > 4 || nx > 4 || m[ny][nx]) continue;
		m[ny][nx] = 1;
		dfs(ny, nx, c+1);
		m[ny][nx] = 0;
	}
}

int main(){
	int k;
	scanf("%d", &k);
	size = 25-k;
	for(int i = 0; i < k; i++){
		int a, b;
		scanf("%d%d", &a, &b);
		m[a-1][b-1] = 1;
	}
	m[0][0] = 1;
	dfs(0, 0, 1);
	printf("%d\n", ret);
}
