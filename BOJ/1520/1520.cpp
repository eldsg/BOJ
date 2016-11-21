#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

int mapp[501][501];
int dp[501][501];
int a, b;
int result = 0;

int proc(int c, int d){
	if(c == a && d == b) return 1;
	int &ret = dp[c][d];
	if(ret != 0) return ret;
	if(c+1 <= a && mapp[c][d] > mapp[c+1][d]){
		ret += proc(c+1,d);
	}
	if(c-1 > 0 && mapp[c][d] > mapp[c-1][d]){
		ret += proc(c-1,d);
	}
	if(d+1 <= b && mapp[c][d] > mapp[c][d+1]){
		ret += proc(c, d+1);
	}
	if(d-1 > 0 && mapp[c][d] > mapp[c][d-1]){
		ret += proc(c, d-1);
	}
	return ret;
}

int main(){
	memset(dp, 0, sizeof(dp));
	scanf("%d %d", &a, &b);
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			scanf("%d", &mapp[i][j]);
		}
	}
	printf("%d\n", proc(1, 1));
}
