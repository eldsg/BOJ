#include<cstdio>
#include<cstdlib>
#include<cstring>

int min = 9999999999;
char mapp[101][101];
int a, b;
void solve(int x, int y, int ret){
	if(x == 0 && y == 0){
		if(min > ret) min = ret;
	}
	mapp[x][y] = '0';
	if(x > 0 && mapp[x-1][y] == '1') solve(x-1, y, ret+1);
	if(x < b-1 && mapp[x+1][y] == '1') solve(x+1, y, ret+1);
	if(y > 0 && mapp[x][y-1] == '1') solve(x, y-1, ret+1);
	if(y < a-1 && mapp[x][y+1] == '1') solve(x, y+1, ret+1);
	mapp[x][y] = '1';
}

int main(){
	scanf("%d %d", &a, &b);
	memset(mapp, 0, sizeof(mapp));
	for(int i = 0; i<a; i++){
		scanf("%s", mapp[i]);
	}
	solve(a-1, b-1, 1);
	printf("%d\n", min);
}
