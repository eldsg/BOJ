#include<cstdio>

int to[201][201];
int realto[201][201];
int a, b, c, d;

#define MOD 1000007

int proc(int y, int x){
	if(x < 1 || y < 1) return 0;
	if(to[y][x]) return to[y][x];
	return to[y][x] = ((proc(y-1, x)%MOD) + (proc(y, x-1)%MOD))%MOD;
}
int main(){
	scanf("%d%d%d%d", &a, &b, &c, &d);
	for(int i = 1; i <= a; i++) to[1][i] = 1;
	for(int j = 1; j <= b; j++) to[j][1] = 1;
	/*
	for(int i = 1; i <= b; i++){
		for(int j = 1; j <=a; j++){
			printf("%d ", to[i][j]);
		}
		printf("\n");
	}
	*/
	proc(d, c);
	/*
	printf("\n");
	for(int i = 1; i <= b; i++){
		for(int j = 1; j <=a; j++){
			printf("%d ", to[i][j]);
		}
		printf("\n");
	}
	*/
	for(int i = c; i <= a; i++) to[d][i] = to[d][c];
	for(int i = d; i <= b; i++) to[i][c] = to[d][c];
	/*
	printf("\n");
	for(int i = 1; i <= b; i++){
		for(int j = 1; j <=a; j++){
			printf("%d ", to[i][j]);
		}
		printf("\n");
	}
	*/
	proc(b, a);
	/*
	printf("\n");
	for(int i = 1; i <= b; i++){
		for(int j = 1; j <=a; j++){
			printf("%d ", to[i][j]);
		}
		printf("\n");
	}
	*/
	printf("%d\n", to[b][a]);
	
	
}
