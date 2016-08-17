#include<stdio.h>
#include<string.h>

bool baecu[52][52];
int result, m, n, a, b;
void solve(int x, int y){	
	baecu[x][y] = false;
	if(y-1 >= 0 && baecu[x][y-1]) solve(x, y-1);
	if(y+1 < a && baecu[x][y+1]) solve(x, y+1);
	if(x-1 >= 0 && baecu[x-1][y]) solve(x-1, y);
	if(x+1 < b && baecu[x+1][y]) solve(x+1, y);
	if(y-1 >= 0 && x-1 >= 0 && baecu[x-1][y-1]) solve(x-1, y-1);
	if(y-1 >= 0 && x+1 < b && baecu[x+1][y-1]) solve(x+1, y-1);
	if(y+1 < a && x-1 >= 0 && baecu[x-1][y+1]) solve(x-1, y+1);
	if(y+1 < a && x+1 < b && baecu[x+1][y+1]) solve(x+1, y+1);
}
int main(){
	while(1){
		scanf("%d %d", &a, &b);
		if(!a && !b) break;
		result = 0;
		memset(baecu, false, sizeof(baecu));
		for(int i = 0; i<b; i++){
			for(int j = 0; j<a; j++){
				scanf("%d", &baecu[i][j]);
			}
		}
		for(int i = 0; i<b; i++){
			for(int j = 0; j<a; j++){
				if(baecu[i][j]){
					solve(i, j);
					result++;
				}
			}
		}
		printf("%d\n", result);
	}
}


