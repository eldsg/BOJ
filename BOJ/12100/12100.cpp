#include<cstdio>
#include<cstring>

int block[22][22];
int max = -1;
int N;
void proc(int b[][22], int c, int n);
void proc(int b[][22], int c, int n){
	int temp[22][22];
	bool check[22];
	memset(temp, 0, sizeof(temp));
	if(n == 1){
		for(int i = 1; i <= N; i++){
			int k = 1;
			memset(check, false, sizeof(check));
			for(int j = 1; j <= N; j++){
				if(b[i][j] != 0){
					if(b[i][j] == temp[i][k-1] && !check[k-1]){
						temp[i][k-1] *= 2;
						check[k-1] = true;
					}
					else{
						temp[i][k] = b[i][j];
						k++;
					}
				}
			}
		}
	}
	if(n == 2){
		for(int i = 1; i <= N; i++){
			int k = N;
			memset(check, false, sizeof(check));
			for(int j = N; j > 0; j--){
				if(b[i][j] != 0){
					if(b[i][j] == temp[i][k+1] && !check[k+1]){
						temp[i][k+1] *= 2;
						check[k+1] = true;
					}
					else{
						temp[i][k] = b[i][j];
						k--;
					}
				}
			}
		}
	}
	if(n == 3){
		for(int i = 1; i <= N; i++){
			int k = 1;
			memset(check, false, sizeof(check));
			for(int j = 1; j <= N; j++){
				if(b[j][i] != 0){
					if(b[j][i] == temp[k-1][i] && !check[k-1]){
						temp[k-1][i] *= 2;
						check[k-1] = true;
					}
					else{
						temp[k][i] = b[j][i];
						k++;
					}
				}
			}
		}
	}
	if(n == 4){
		for(int i = 1; i <= N; i++){
			int k = N;
			memset(check, false, sizeof(check));
			for(int j = N; j > 0; j--){
				if(b[j][i] != 0){
					if(b[j][i] == temp[k+1][i] && !check[k+1]){
						temp[k+1][i] *= 2;
						check[k+1] = true;
					}
					else{
						temp[k][i] = b[j][i];
						k--;
					}
				}
			}
		}
	}
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			max = temp[i][j] > max ? temp[i][j] : max;
		}
	}
	if(c != 4){
		proc(temp, c+1, 1);
		proc(temp, c+1, 2);
		proc(temp, c+1, 3);
		proc(temp, c+1, 4);
	}
}

int main(){
	scanf("%d", &N);
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			scanf("%d", &block[i][j]);
			max = block[i][j] > max ? block[i][j] : max;
		}
	}
	proc(block, 0, 1);
	proc(block, 0, 2);
	proc(block, 0, 3);
	proc(block, 0, 4);
	printf("%d\n", max);
}
