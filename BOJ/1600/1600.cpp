#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

int mm[201][201];
	
int hx[8] = {2, 2, 1, -1, -2, -2, 1, -1 };
int hy[8] = {1, -1, 2, 2, 1, -1, -2, -2 };
int mx[4] = {1, -1, 0, 0};
int my[4] = {0, 0, 1, -1};

queue<pair<int, int> > MONKEY;

bool visit[201][201][31];

int main(){
	int k, x, y;
	scanf("%d%d%d", &k, &x, &y);
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			scanf("%d", &mm[i][j]);
		}
	}
	MONKEY.push({0, 0});
	visit[0][0][0] = true;
	int ret = 0;
	while(!MONKEY.empty()){
		int s = MONKEY.size();
		while(s--){
			int cy = MONKEY.front().first/1000;
			int cx = MONKEY.front().first%1000;
			int ck = MONKEY.front().second;
			MONKEY.pop();
			if(cy == y-1 && cx == x-1){
				printf("%d\n", ret);
				return 0;
			}
			if(ck < k){
				for(int i = 0; i < 8; i++){
					int ny = cy + hy[i];
					int nx = cx + hx[i];
					int nk = ck+1;
					if(ny < 0 || nx < 0 || ny > y-1 || nx > x-1) continue;
					if(visit[ny][nx][nk]) continue;
					if(mm[ny][nx] == 1) continue;
					MONKEY.push({ny*1000+nx, nk});
					visit[ny][nx][nk] = true;
				}
			}
			for(int i = 0; i < 4; i++){
				int ny = cy + my[i];
				int nx = cx + mx[i];
				int nk = ck;
				if(ny < 0 || nx < 0 || ny > y-1 || nx > x-1) continue;
				if(visit[ny][nx][nk]) continue;
				if(mm[ny][nx] == 1) continue;
				MONKEY.push({ny*1000+nx, nk});
				visit[ny][nx][nk] = true;
			}
		}
		ret++;
	}
	puts("-1");
}
