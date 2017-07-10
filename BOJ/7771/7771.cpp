#include <bits/stdc++.h>
// 4칸 1개 3칸 2개 2칸 3개 1칸 4개
using namespace std;
int mapp[11][11];
int print[32][32];
int chkx[10] = { -1, -1, -1, 0, 0, 1, 1, 1};
int chky[10] = { 1, 0, -1, 1, -1, 0, -1, 1};
int main(){
	int y, x;
	memset(print, -1, sizeof(print));
	for(int i = 1; i <= 10; i++) for(int j = 1; j <= 10; j++) print[i][j] = 0;
	for(int i = 1; i <= 10; i++){
		for(int j = 1; j <= 10; j++){
			scanf("%d", &mapp[i][j]);
			if(mapp[i][j] == 100){
				y = i;
				x = j;
				print[i][j] = 1;
				for(int k = 0; k < 8; k++){
					print[i+chky[k]][j+chkx[k]] = -1;
				}
			}
		}
	}
	int cnt = 0;
	int who = 1;
	bool chk = false;
	for(int i = 1; i <= 10; i++){
		for(int j = 1; j <= 10; j++){
			if(who == 1 && cnt < 3 && print[i][j] == 0){
				print[i][j] = 1;
				for(int k = 0; k < 8; k++) print[i+chky[k]][j+chkx[k]] = -1;
				j++, cnt++;
				if(cnt >= 3) who = 2, cnt = 0;
			}
			else if(who == 2 && cnt < 3 && print[i][j] == 0 && print[i][j+1] == 0){
				print[i][j] = print[i][j+1] = 1;
				for(int k = 0; k < 8; k++) if(k!=5) print[i+chky[k]][j+chkx[k]] = -1;
				for(int k = 0; k < 8; k++) if(k!=1) print[i+chky[k]][j+1+chkx[k]] = -1;
				j+=2, cnt++;
				if(cnt >= 3) who = 3, cnt = 0;
			}
			else if(who == 3 && cnt < 2 && print[i][j] == 0 && print[i][j+1] == 0 && print[i][j+2] == 0){
				print[i][j] = print[i][j+1] = print[i][j+2] = 1;
				for(int k = 0; k < 8; k++) if(k!=5) print[i+chky[k]][j+chkx[k]] = -1;
				for(int k = 0; k < 8; k++) if(k!=5 && k!=1) print[i+chky[k]][j+1+chkx[k]] = -1;
				for(int k = 0; k < 8; k++) if(k!=1) print[i+chky[k]][j+2+chkx[k]] = -1;
				j+=3, cnt++;
				if(cnt >= 2) who = 4, cnt = 0;
			}
			else if(who == 4 && cnt < 1 && print[i][j] == 0 && print[i][j+1] == 0 && print[i][j+2] == 0 && print[i][j+3] == 0){
				print[i][j] = print[i][j+1] = print[i][j+2] = print[i][j+3] = 1;
				chk = true;
				break;
			}
		}
		if(chk) break;
	}
	for(int i = 1; i <= 10; i++){
		for(int j = 1; j <= 10; j++){
			if(print[i][j] == 1) printf("#");
			else printf(".");
		}
		puts("");
	}

}