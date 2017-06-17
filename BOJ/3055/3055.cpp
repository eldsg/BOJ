#include<cstdio>
#include<queue>

using namespace std;

char mi[51][51];

int mx[4] = { 1, -1, 0, 0 };
int my[4] = { 0, 0, 1, -1 };
bool visit[51][51];
queue<int> WATER;
queue<int> KAK;

int main(){
	int n, m, dx, dy, nx, ny;
	scanf("%d%d\n", &n, &m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%c", &mi[i][j]);
			if(mi[i][j] == 'D'){
				dy = i;
				dx = j;
			}
			else if(mi[i][j] == 'S'){
				ny = i;
				nx = j;
			}
			else if(mi[i][j] == '*'){
				WATER.push(i*1000+j);
			}
		}
		getchar();
	}
	KAK.push(ny*1000+nx);
	visit[ny][nx] = true;
	int ret = 0;
	while(!KAK.empty()){
		int s = WATER.size();
		while(s--){
			int cwy = WATER.front()/1000;
			int cwx = WATER.front()%1000;
			WATER.pop();
			for(int i = 0; i < 4; i++){
				int nwy = cwy + my[i];
				int nwx = cwx + mx[i];
				if(nwy < 0 || nwx < 0 || nwy >= n || nwx >= m) continue;
				if(mi[nwy][nwx] == '*' || mi[nwy][nwx] == 'X' || mi[nwy][nwx] == 'D') continue;
				mi[nwy][nwx] = '*';
				WATER.push(nwy*1000+nwx);
			}
			
		}
		/*
		puts("");
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				printf("%c", mi[i][j]);
			}
			puts("");
		}
		*/
		s = KAK.size();
		while(s--){
			int cky = KAK.front()/1000;
			int ckx = KAK.front()%1000;
			KAK.pop();
			if(cky == dy && ckx == dx){
				printf("%d\n", ret);
				return 0;
			}
			for(int i = 0; i < 4; i++){
				int nky = cky + my[i];
				int nkx = ckx + mx[i];
				if(nky < 0 || nkx < 0 || nky >= n || nkx >= m) continue;
				if(mi[nky][nkx] == '*' || mi[nky][nkx] == 'X') continue;
				if(visit[nky][nkx]) continue;
				KAK.push(nky*1000+nkx);
				visit[nky][nkx] = true;
			}
		}
		ret++;
	}
	puts("KAKTUS");
}
