#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;

int m[11][11];
bool black[141];
bool white[141];
int n;
int maximum = 0;
void findblack(int x, int y, int cnt){
	if(cnt > maximum) maximum = cnt;
	if(y > n){
		x++;
		if(x%2) y=1;
		else y=0;
	}
	if(x > n) return;
	if(black[x+y]==false && black[100+x-y]==false && m[x][y] == 1){
		black[x+y] = true;
		black[100+x-y] = true;
		findblack(x, y+2, cnt+1);
		black[x+y] = false;
		black[100+x-y] = false;
	}
	findblack(x, y+2, cnt);
}

void findwhite(int x, int y, int cnt){
	if(cnt > maximum) maximum = cnt;
	if(y > n){
		x++;
		if(x%2) y=0;
		else y=1;
	}
	if(x > n) return;
	if(white[x+y]==false && white[100+x-y]==false && m[x][y] == 1){
		white[x+y] = true;
		white[100+x-y] = true;
		findwhite(x, y+2, cnt+1);
		white[x+y] = false;
		white[100+x-y] = false;
	}
	findwhite(x, y+2, cnt);
}


int main(){
	int i, j, ret=0;
	memset(black, false, sizeof(black));
	memset(white, false, sizeof(white));
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &m[i][j]);
		}
	}
	findblack(0, 0, 0);
	ret += maximum;
	maximum = 0;
	findwhite(0, 1, 0);
	ret += maximum;
	printf("%d\n", ret);
}

