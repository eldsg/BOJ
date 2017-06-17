#include<cstdio>
#include<queue>

using namespace std;

queue<pair<int, int> > MINSIK;

int mx[4] = { 0, 0, 1, -1};
int my[4] = { 1, -1, 0, 0};

char m[51][51];
bool visit[51][51][1<<7];
bool check = false;
int main(){
	int a, b, ret = 0;
	scanf("%d%d\n", &a, &b);
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			scanf("%c", &m[i][j]);
			if(m[i][j] == '0'){
				MINSIK.push(make_pair(i*1000+j, 0));
				visit[i][j][0] = true;
			}
		}
		getchar();
	}
	while(!MINSIK.empty()){
		ret++;
		int size = MINSIK.size();
		while(size--){
			int cy = MINSIK.front().first/1000;
			int cx = MINSIK.front().first%1000;
			int key = MINSIK.front().second;
			MINSIK.pop();
			if(m[cy][cx] == '1'){
				check = true;
				break;
			}
			for(int i = 0; i < 4; i++){
				int nx = cx + mx[i];
				int ny = cy + my[i];
				int nkey = key;
				if(ny < 0 || ny > a-1 || nx < 0 || nx > b-1) continue;
				if(m[ny][nx] == '#') continue;
				else if(m[ny][nx] >= 'a' && m[ny][nx] <= 'f') nkey |= 1 << (m[ny][nx]-'a');
				else if(m[ny][nx] >= 'A' && m[ny][nx] <= 'F' && !(nkey & (1 << m[ny][nx]-'A'))) continue;
				if(visit[ny][nx][key]) continue;
				visit[ny][nx][nkey] = true;
				MINSIK.push(make_pair(ny*1000+nx, nkey));
				
			}
		}
		if(check) break;
	}
	if(check) printf("%d\n", ret-1);
	else printf("-1\n");
}
