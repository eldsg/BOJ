#include <bits/stdc++.h>

typedef struct b{
	int i, j;
}b;
bool chk[5][5] ;
bool proc(){
	int ret = 0;
	for(int i = 0; i < 5; i++){
		if(chk[i][0] && chk[i][1] && chk[i][2] && chk[i][3] && chk[i][4]) ret++;
	}
	for(int i = 0; i < 5; i++){	
		if(chk[0][i] && chk[1][i] && chk[2][i] && chk[3][i] && chk[4][i]) ret++;
	}
	if(chk[0][0] && chk[1][1] && chk[2][2] && chk[3][3] && chk[4][4]) ret++;
	if(chk[0][4] && chk[1][3] && chk[2][2] && chk[3][1] && chk[4][0]) ret++;
	if(ret >= 3) return true;
	else return false;
}
int main(){
	b bingo[51];
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			int temp;
			scanf("%d", &temp);
			bingo[temp].i = i;
			bingo[temp].j = j;
		}
	}
	int k = 0;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			k++;
			int temp ;
			scanf("%d", &temp);
			chk[bingo[temp].i][bingo[temp].j] = true;
			if(proc()) {
				printf("%d\n", k);
				return 0;
			}
		}
	}
}