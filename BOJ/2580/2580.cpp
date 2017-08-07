#include <bits/stdc++.h>

int sk[10][10];
int row[10][10];
int col[10][10];
int cel[10][10];
int getpos(int i, int j){
	return 3*(i/3)+(j/3);
}
void proc(){
	int x, y;
	x = y = -1;
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			if(sk[i][j] == 0){
				x = i, y = j;
				break;
			}
		}
		if(x != -1) break;
	}
	if(x == -1){
		for(int i = 0; i < 9; i++){
			for(int j = 0; j < 9; j++){
				printf("%d ", sk[i][j]);
			}
			puts("");
		}
	}
	for(int i = 1; i <= 9; i++){
		if(!row[x][i] && !col[y][i] && !cel[getpos(x,y)][i]){
			row[x][i] = col[y][i] = cel[getpos(x,y)][i] = 1;
			sk[x][y] = i;
			proc();
			sk[x][y] = 0;
			row[x][i] = col[y][i] = cel[getpos(x,y)][i] = 0;
		}
	}
}
int main(){
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			scanf("%d", &sk[i][j]);
			row[i][sk[i][j]] = 1;
			col[j][sk[i][j]] = 1;
			cel[getpos(i,j)][sk[i][j]] = 1;
		}
	}
	/*
	for(int i = 1; i <= 9; i++){
		for(int j = 1; j <= 9; j++){
			printf("%d ", sk[i][j]);
		}
		puts("");
	}
	*/
	proc();

}