#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<queue>
using namespace std;

char mapp[101][101];
int con[101][101] = { {1, },  };
bool visit[101][101];
queue<pair<int, int> > ret;
int a, b;
void solve(){
	memset(visit, false, sizeof(visit));
	ret.push(make_pair(0,0));
	visit[0][0] = 1;
	while(!ret.empty()){
		if(ret.front().first-1>=0 && !visit[ret.front().first-1][ret.front().second] && mapp[ret.front().first-1][ret.front().second] == '1'){
			visit[ret.front().first-1][ret.front().second] = 1;
			con[ret.front().first-1][ret.front().second] = con[ret.front().first][ret.front().second]+1;
			ret.push(make_pair(ret.front().first-1, ret.front().second));
		}
		if(ret.front().first+1 < a && !visit[ret.front().first+1][ret.front().second] && mapp[ret.front().first+1][ret.front().second] == '1'){
			visit[ret.front().first+1][ret.front().second] = 1;
			con[ret.front().first+1][ret.front().second] = con[ret.front().first][ret.front().second]+1;
			ret.push(make_pair(ret.front().first+1, ret.front().second));
		}
		if(ret.front().second-1>=0 && !visit[ret.front().first][ret.front().second-1] && mapp[ret.front().first][ret.front().second-1] == '1'){
			visit[ret.front().first][ret.front().second-1] = 1;
			con[ret.front().first][ret.front().second-1] = con[ret.front().first][ret.front().second]+1;
			ret.push(make_pair(ret.front().first, ret.front().second-1));
		}
		if(ret.front().second+1 < b && !visit[ret.front().first][ret.front().second+1] && mapp[ret.front().first][ret.front().second+1] == '1'){
			visit[ret.front().first][ret.front().second+1] = 1;
			con[ret.front().first][ret.front().second+1] = con[ret.front().first][ret.front().second]+1;
			ret.push(make_pair(ret.front().first, ret.front().second+1));
		}
		ret.pop();
	}
	printf("%d\n", con[a-1][b-1]);
}

int main(){
	scanf("%d %d", &a, &b);
	memset(mapp, 0, sizeof(mapp));
	for(int i = 0; i<a; i++){
		scanf("%s", mapp[i]);
	}
	solve();
}
