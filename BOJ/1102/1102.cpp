#include<cstdio>
#include<cstring>
int dp[17][1<<16];
bool up[17];
int m[17][17];
int n, k, c;

#define min(a,b) a > b ? b : a

int proc(int a, int b){
	if(a >= k) return 0;
	int &ret = dp[a][b];
	if(ret != -1) return ret;
	ret = 1e9;
	for(int i = 0; i < n; i++){
		if((b & (1 << i))){
			for(int j = 0; j < n; j++){
				if(!(b & (1 << j))){
					ret = min(ret, proc(a+1, b | (1 << j)) + m[i][j]);
				}
			}
		}
	}
	return ret;
}

int main(){
	memset(dp, -1, sizeof(dp));
	char str[17];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &m[i][j]);
		}
	}
	getchar();
	int current = 0;
	int r = 0;
	scanf("%s %d", str, &k);
	for(int i = 0; str[i]; i++){
		if(str[i] == 'Y') {
			current += (1 << i);
			r++;
		}
	}
	int ret = proc(r, current);
	printf("%d\n", ret == 1e9 ? -1 : ret);
}
