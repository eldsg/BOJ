#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int mm[101][101];

int mx[4] = { 0, 0, 1, -1};
int my[4] = { 1, -1, 0, 0};

int y, x, t;
int k = 0;
vector<int> ret;

void dfs(int a, int b){
	if(mm[a][b] != 0) return ;
	k++;
	mm[a][b] = 1;
	for(int i = 0; i < 4; i++){
		int nx = b + mx[i];
		int ny = a + my[i];
		if(nx < 0 || ny < 0 || nx > x-1 || ny > y-1 || mm[ny][nx] != 0) continue;
		dfs(ny, nx);
	}
}

int main(){
	scanf("%d%d%d", &y, &x, &t);
	while(t--){
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		for(int i = b; i < d; i++){
			for(int j = a; j < c; j++){
				mm[i][j] = 1;
			}
		}
	}
	/*
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			printf("%d", mm[i][j]);
		}
		puts("");
	}
	*/
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			dfs(i, j);
			if(k!=0) ret.push_back(k);
			k = 0;
		}
	}
	sort(ret.begin(), ret.end());
	int size = ret.size();
	printf("%d\n", size);
	for(int i = 0; i < size; i++){
		printf("%d ", ret[i]);
	}
	puts("");
}
