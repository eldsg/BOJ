#include<cstdio>

int n, k;

char m[64][64];

int min(int a, int b){
	return a > b ? b : a;
}
int chk(int x, int y){
	int r = 0;
	for(int i = x; i < x + 8; i+=2){
		for(int j = y; j < y+8; j+=2){
			if(m[i][j] != 'W') r++;
		}
		for(int j = y+1; j < y+8; j+=2){
			if(m[i][j] != 'B') r++;
		}
	}
	for(int i = x+1; i < x + 8; i+=2){
		for(int j = y; j < y+8; j+=2){
			if(m[i][j] !='B') r++;
		}
		for(int j = y+1; j < y+8; j+=2){
			if(m[i][j] != 'W') r++;
		}
	}
	return r;
}
int chk2(int x, int y){
	int r = 0;
	for(int i = x+1; i < x + 8; i+=2){
		for(int j = y; j < y+8; j+=2){
			if(m[i][j] != 'W') r++;
		}
		for(int j = y+1; j < y+8; j+=2){
			if(m[i][j] != 'B') r++;
		}
	}
	for(int i = x; i < x + 8; i+=2){
		for(int j = y; j < y+8; j+=2){
			if(m[i][j] !='B') r++;
		}
		for(int j = y+1; j < y+8; j+=2){
			if(m[i][j] != 'W') r++;
		}
	}
	return r;
}
int main(){
	scanf("%d%d ", &n, &k);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			scanf("%c", &m[i][j]);
		}
		getchar();
	}
	
	int ret = 1e9;
	for(int i = 0; i <= n-8; i++){
		for(int j = 0; j <= k-8; j++){
			ret = min(ret, chk(i, j));
			ret = min(ret, chk2(i, j));
		}
	}
	printf("%d\n", ret);
}
