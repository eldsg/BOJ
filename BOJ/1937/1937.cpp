#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>

using namespace std;

int mapp[501][501];
int dp[501][501];
int a, b;

int proc(int c, int d){
	int &ret = dp[c][d];
	if(ret != 0) return ret;
	if(c+1 <= a && mapp[c][d] < mapp[c+1][d]){
		ret = max(ret, proc(c+1,d)+1);
	}
	if(c-1 > 0 && mapp[c][d] < mapp[c-1][d]){
		ret = max(ret, proc(c-1,d)+1);
	}
	if(d+1 <= a && mapp[c][d] < mapp[c][d+1]){
		ret = max(ret, proc(c, d+1)+1);
	}
	if(d-1 > 0 && mapp[c][d] < mapp[c][d-1]){
		ret = max(ret, proc(c, d-1)+1);
	}
	return ret;
}

int main(){
	scanf("%d", &a);
	int ret = 0;
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= a; j++){
			scanf("%d", &mapp[i][j]);
		}
	}
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= a; j++){
			ret = max(ret, proc(i,j));	
		}
	}
	printf("%d\n", ret+1);
}
