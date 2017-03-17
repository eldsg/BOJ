#include<cstdio>
#include<queue>

using namespace std;

int mx[4] = { 1, 0, -1, 0};
int my[4] = { 0, 1, 0, -1};

char mapp[51][51];
int yy, xx;

int bfs(int y, int x){
	queue<int> temp;
	int visit[51][51] = { 0, };
	temp.push(y*100+x);
	int ret = 0;
	visit[y][x] = 1;
	while(!temp.empty()){
		int ky = temp.front()/100;
		int kx = temp.front()%100;
		temp.pop();
		if(visit[ky][kx] > ret) ret = visit[ky][kx];
		for(int i = 0; i < 4; i++){
			int ry = ky + my[i];
			int rx = kx + mx[i];
			if(ry >= 0 && rx >= 0 && ry < yy && rx < xx && visit[ry][rx] == 0 && mapp[ry][rx] == 'L'){
				visit[ry][rx] = visit[ky][kx]+1;
				temp.push(ry*100+rx);
			}
		}
	}
	return ret - 1;
}

int main(){
	int ret = 0;
	scanf("%d%d\n", &yy, &xx);
	for(int i = 0; i < yy; i++){
		scanf("%s", mapp[i]);
	}
	for(int i = 0; i < yy; i++){
		for(int j = 0; j < xx; j++){
			if(mapp[i][j] == 'L') ret = max(ret, bfs(i,j));
		}
	}
	printf("%d\n", ret);
}
