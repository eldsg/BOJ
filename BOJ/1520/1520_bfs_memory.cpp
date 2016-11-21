#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<queue>

using namespace std;

int mapp[501][501];
int a, b;
queue<pair<int, int> > ret;
int result = 0;

void proc(int c, int d){
	ret.push(make_pair(c, d));
	while(!ret.empty()){
		int x = ret.front().first;
		int y = ret.front().second;
		if(x+1 <= a && mapp[x+1][y] < mapp[x][y]){
			ret.push(make_pair(x+1, y));
			if(x+1 == a && y == b) result+=1;
		}
		if(x-1 > 0 && mapp[x-1][y] < mapp[x-1][y]){
			ret.push(make_pair(x-1,y));
			if(x-1 == a && y == b) result+=1;
		}
		if(y-1 > 0 && mapp[x][y-1] < mapp[x][y]){
			ret.push(make_pair(x, y-1));
			if(x == a && y-1 == b) result+=1;
		}
		if(y+1 <= b && mapp[x][y+1] < mapp[x][y]){
			ret.push(make_pair(x, y+1));
			if(x == a && y+1 == b) result+=1;
		}
		ret.pop();
	}
	printf("%d\n", result);
}

int main(){
	scanf("%d %d", &a, &b);
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			scanf("%d", &mapp[i][j]);
		}
	}
	proc(1, 1);
}
