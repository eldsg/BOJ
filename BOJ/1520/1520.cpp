#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

int mapp[520][520];
int dp[512][512];
int a, b;
int proc(int c, int d){
	if(c == a && d == b) return 1;
	int &ret = dp[c][d];
	if(ret != -1) return ret;
	ret = 0;
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
	scanf("%d %d", &a, &b);
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			scanf("%d", &mapp[i][j]);
            dp[i][j] = -1;
		}
	}
	printf("%d\n", proc(1, 1));
}

