#include<stdio.h>
#include<string.h>

bool baecu[52][52];
int result, m, n;
void solve(int x, int y){	
	baecu[x][y] = false;
	if(y-1 >= 0 && baecu[x][y-1]) solve(x, y-1);
	if(y+1 < m && baecu[x][y+1]) solve(x, y+1);
	if(x-1 >= 0 && baecu[x-1][y]) solve(x-1, y);
	if(x+1 < n && baecu[x+1][y]) solve(x+1, y);
}
int main(){
	int t, k;
	scanf("%d", &t);
	while(t--){
		result = 0;
		memset(baecu, false, sizeof(baecu));
		scanf("%d %d %d", &m, &n, &k);
		for(int i = 0; i<k; i++){
			int a, b;
			scanf("%d %d", &a, &b);
			baecu[b][a] = true;
		}
		for(int i = 0; i<n; i++){
			for(int j = 0; j<m; j++){
				if(baecu[i][j]){
					solve(i, j);
					result++;
				}
			}
		}
		printf("%d\n", result);
	}
}
