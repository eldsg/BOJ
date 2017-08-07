#include <bits/stdc++.h>

using namespace std;

int c[21][21];
int dp[21][21][21][21][21]; // l의 길이를 가지는 x0, y0에서 x1, y1까지의 팰린드롬 경로의 개수
int mx[8] = {0, 0, 1, 1, 1, -1, -1, -1};
int my[8] = {1, -1, 0, -1, 1, 0, -1, 1};

int main(){
	int n, l;
	scanf("%d %d", &n, &l);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &c[i][j]);
			dp[1][i][j][i][j] = 1; // 길이가 1인 팰린드롬은 바로 초기화
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < 8; k++){
				int nx = i+mx[k], ny = j+my[k];
				if(nx >= 0 && ny >= 0 && nx < n and ny < n){
					if(c[i][j] == c[nx][ny]){
						dp[2][i][j][nx][ny]++;
					}
				}
			}
		}
	}
	for(int k = 3; k <= l; k++){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				for(int ii = 0; ii < n; ii++){
					for(int jj = 0; jj < n; jj++){
						if(c[i][j] != c[ii][jj]) continue;
						for(int kk = 0; kk < 8; kk++){
							for(int kkk = 0; kkk < 8; kkk++){
								int nx = i + mx[kk], ny = j + my[kk];
								int nxx = ii + mx[kkk], nyy = jj + my[kkk];
								if(nx >= 0 && ny >= 0 && nxx >= 0 && nyy >= 0 && nx < n && ny < n && nxx < n && nyy < n){	
									if(c[nx][ny] == c[nxx][nyy]){
										dp[k][i][j][ii][jj] += dp[k-2][nx][ny][nxx][nyy]; //두 개의 다른 위치를 비교하기 때문에 길이는 -2
									}
								}
							}
						}
					}
				}
			}
		}
	}
	int ret = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int ii = 0; ii < n; ii++){
				for(int jj = 0; jj < n; jj++){
					ret += dp[l][i][j][ii][jj];
				}
			}
		}
	}
	printf("%d\n", ret);
}