#include<cstdio>
#include<cstring>
#include<cstdlib>

bool room[101][101];
int size;

int lengthCheck(int i){
	int cnt = 0;
	for(int j = 1; j < size; j++){
		if(room[i][j] && room[i][j+1]){
			cnt++;
			while(room[i][j]==true)j++;
		}
	}
	return cnt;
}
int breadthCheck(int i){
	int cnt = 0;
	for(int j = 1; j < size; j++){
		if(room[j][i] && room[j+1][i]){
			cnt++;
			while(room[j][i]==true)j++;
		}
	}
	return cnt;
}

int main(){
	int i, j;
	scanf("%d\n", &size);
	for(i = 1; i <= size; i++){
		for(j = 1; j <= size; j++){
			char a;
			scanf("%c", &a);
			if(a == '.') room[i][j] = true;
			else room[i][j] = false;
		}
		getchar();
	}
	int ret = 0;
	int ret2 = 0;
	for(i = 1; i <= size; i++){
		ret += lengthCheck(i);
		ret2 += breadthCheck(i);
	}
	printf("%d %d\n", ret, ret2);
}

