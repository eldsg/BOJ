#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>

using namespace std;

vector<vector<int> > m;
int ret[101][101];
bool visit[101][101];
int t, a, k = 0;

void bfs(int a, int b){
	for(int i = 0; i<m[b].size(); i++){
		if(visit[b][m[b][i]]) return;
		ret[a][m[b][i]] = 1;
		ret[b][m[b][i]] = 1;
		visit[a][m[b][i]] = true;
		visit[b][m[b][i]] = true;
		bfs(a, m[b][i]);
	}
}


int main(){
	scanf("%d", &t);
	for(int i = 0; i<t; i++){
		vector<int> temp;
		for(int j = 0; j<t; j++){
			scanf("%d", &ret[i][j]);
			if(ret[i][j]) temp.push_back(j);
		}
		m.push_back(temp);
	}
	for(int i = 0; i<t; i++){
		memset(visit, 0, sizeof(visit));
		bfs(i, i);
	}
	for(int i = 0; i<t; i++){
		for(int j = 0; j<t; j++){
			printf("%d ",ret[i][j]);
		}
		printf("\n");
	}
}
