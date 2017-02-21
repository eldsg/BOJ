#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<queue>
#include<vector>

using namespace std;

int cx[4] = {0, 0, 1, -1};
int cy[4] = {1, -1, 0, 0};
int main(){
	int tc;
	scanf("%d", &tc);
	while(tc--){
		int a, b, c, d, ret = 0;
		bool check = false;
		char room[1001][1001];
		bool visit[1001][1001];
		queue<int> move;
		queue<int> fire;
		memset(visit, false, sizeof(visit));
		scanf("%d %d\n", &a, &b);
		for(int i = 0; i < b; i++){
			for(int j = 0; j < a; j++){
				scanf("%c", &room[i][j]);
				if(room[i][j] == '@'){
					move.push(1000*i+j);
				}
				if(room[i][j] == '*'){
					fire.push(1000*i+j);
				}
				if(room[i][j] == '*' || room[i][j] == '#') visit[i][j] = true;
			}
			getchar();
		}
		while(!move.empty()){
			ret++;
			int size = move.size();
			for(int i = 0; i < size; i++){
				int temp = move.front();
				int x = temp/1000;
				int y = temp%1000;
				move.pop();
				if(room[x][y] == '*') continue;
				for(int j = 0; j < 4; j++){
					int x1 = x + cx[j];
					int y1 = y + cy[j];
					if(x1 >= b || y1 >= a || x1 < 0 || y1 < 0){
						check = true;
						break;
					}
					if(!visit[x1][y1] && room[x1][y1] == '.'){
						visit[x1][y1] = true;
						move.push(1000*x1+y1);
					}
				}
			}
			if(check) break;
			size = fire.size();
			for(int i = 0; i < size; i++){
				int temp = fire.front();
				int x = temp/1000;
				int y = temp%1000;
				fire.pop();
				for(int j = 0; j < 4; j++){
					int x1 = x + cx[j];
					int y1 = y + cy[j];
					if(x1 >= b || y1 >= a || x1 < 0 || y1 < 0) continue;
					if(room[x1][y1] == '.' || room[x1][y1] == '@'){
						room[x1][y1] = '*';
						fire.push(1000*x1+y1);
					}
				}
			}
		}
		if(check) printf("%d\n", ret);
		else printf("IMPOSSIBLE\n");
	}
}
