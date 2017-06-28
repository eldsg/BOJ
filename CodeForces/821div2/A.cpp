#include<cstdio>

int room[51][51], t;

bool chk(int i, int j){
	for(int jj = 0; jj < t; jj++){
		if(jj == j) continue;
		int ret = room[i][jj], ret1;
		for(int ii = 0; ii < t; ii++){
			if(ii == i) continue;
			if(ret+room[ii][j] == room[i][j]) return true;
		}
	}
	return false;
}

int main(){
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		for(int j = 0; j < t; j++){
			scanf("%d", &room[i][j]);
		}
	}
	bool check = false, ret = true;
	for(int i = 0; i < t; i++){
		for(int j = 0; j < t; j++){
			if(room[i][j] != 1){
				ret = chk(i, j);
			}
			if(!ret){
				check = true;
				break;
			}
		}
		if(check) break;
	}
	if(!check) puts("Yes");
	else puts("No");
}
