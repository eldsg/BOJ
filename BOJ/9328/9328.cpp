#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;

char m[115][115];
bool visit[115][115];
queue< int > que;
int mx[4] = { 0, 0, 1, -1 };
int my[4] = { 1, -1, 0, 0 };
int main(){
	int t;
	scanf("%d" ,&t);
	while(t--){
		int y, x;
		char str[26];
		scanf("%d%d\n", &y, &x);
		for(int i = 1; i <= y; i++){
			for(int j = 1; j <= x; j++){
				scanf("%c", &m[i][j]);	
			}
			getchar();
		}
		scanf("%s", str);
		int	key = 0;
		if(str[0] != '0'){
			for(int i = 0; str[i]; i++){
				key |= 1 << str[i] - 'a';
			}
		}
		visit[0][0] = true;
		que.push(1000*0+0);
		int ret = 0;
		//find key && remove door
		while(1){
			visit[0][0] = true;
			que.push(1000*0+0);
			if(key != 0){
				for(int i = 1; i <= y; i++){
					for(int j = 1; j <= x; j++){
						if(m[i][j] >= 'A' && m[i][j] <= 'Z'){
							if(key & 1 << m[i][j] - 'A'){
								m[i][j] = '.';
							}
						}
					}
				}
			}
			key = 0;
			while(!que.empty()){
				int cy = que.front()/1000;
				int cx = que.front()%1000;
				que.pop();
				for(int i = 0; i < 4; i++){
					int ny = cy + my[i];
					int nx = cx + mx[i];
					if(ny < 0 || nx < 0 || ny > y+1 || nx > x+1) continue;
					if(visit[ny][nx]) continue;
					if(m[ny][nx] >= 'A' && m[ny][nx] <= 'Z') continue;
					if(m[ny][nx] == '*') continue;
					if(m[ny][nx] >= 'a' && m[ny][nx] <= 'z'){
						key |= 1 << m[ny][nx] - 'a';
						m[ny][nx] = '.';
					}
					visit[ny][nx] = true;
					que.push(1000*ny+nx);
				}
			}
			if(key == 0) break;
			memset(visit, false, sizeof(visit));
		}
	/*	
		for(int i = 0; i <= y+1; i++){
			for(int j = 0; j <= x+1; j++){
				printf("%c", m[i][j]);
			}
			puts("");
		}
	*/	
		memset(visit, false, sizeof(visit));
		que.push(0);
		visit[0][0] = true;
		while(!que.empty()){
			int cy = que.front()/1000;
			int cx = que.front()%1000;
			que.pop();
			for(int i = 0; i < 4; i++){
				int ny = cy + my[i];
				int nx = cx + mx[i];
				if(ny < 0 || nx < 0 || ny > y+1 || nx > x+1) continue;
				if(visit[ny][nx]) continue;
				if(m[ny][nx] == '*') continue;
				if(m[ny][nx] >= 'A' && m[ny][nx] <= 'Z') continue;
				if(m[ny][nx] == '$') ret++;
				visit[ny][nx] = true;
				que.push(1000*ny+nx);
			}
		}
		memset(m, 0, sizeof(m));
		memset(visit, false, sizeof(visit));
		printf("%d\n", ret);
	}
}
