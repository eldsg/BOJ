#include<cstdio>

int l, r, u, d, c, cd;
//  4  3  2  5  1  6
int dice[7];
//		up, back, right, left, front, down
int temp[7];
int mm[21][21];
int moving;
int n, m, x, y, k;
bool check(int x, int y){
	if(x < 0 || y < 0 || x > m-1 || y > n-1) return false;
	return true;
}
int flip(int k){
	if(k==1) return 6;
	if(k==2) return 5;
	if(k==3) return 4;
	if(k==4) return 3;
	if(k==5) return 2;
	if(k==6) return 1;
}
int main(){
	scanf("%d%d%d%d%d", &n, &m, &y, &x, &k);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &mm[i][j]);
		}
	}
	int nx, ny, up = 1;
	int down = flip(up);
	// up, back, right, left, front, down
	for(int i = 0; i < k; i++){
		scanf("%d", &moving);
		if(moving == 1){
			nx = x+1;
			ny = y;
			if(!check(nx, ny)) continue;
			temp[0] = dice[3], temp[1] = dice[1], temp[2] = dice[0], temp[3] = dice[5], temp[4] = dice[4], temp[5] = dice[2];
			for(int i = 0; i < 6; i++) dice[i] = temp[i];
		}
		else if(moving == 2){
			nx = x-1;
			ny = y;
			if(!check(nx, ny)) continue;
			temp[0] = dice[2], temp[1] = dice[1], temp[2] = dice[5], temp[3] = dice[0], temp[4] = dice[4], temp[5] = dice[3];
			for(int i = 0; i < 6; i++) dice[i] = temp[i];
		}
		else if(moving == 3){
			nx = x;
			ny = y-1;
			if(!check(nx, ny)) continue;
			temp[0] = dice[4], temp[5] = dice[1], temp[1] = dice[0], temp[4] = dice[5], temp[2] = dice[2], temp[3] = dice[3];
			for(int i = 0; i < 6; i++) dice[i] = temp[i];
		}
		else{
			nx = x;
			ny = y+1;
			if(!check(nx, ny)) continue;	
			temp[2] = dice[2], temp[3] = dice[3], temp[0] = dice[1], temp[5] = dice[4], temp[1] = dice[5], temp[4] = dice[0];
			for(int i = 0; i < 6; i++) dice[i] = temp[i];
		}
		if(mm[ny][nx]){
			dice[5] = mm[ny][nx];
			mm[ny][nx] = 0;
		}
		else mm[ny][nx] = dice[5];
		x = nx;
		y = ny;
		printf("%d\n", dice[0]);
	}
}
