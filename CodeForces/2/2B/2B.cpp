#include<cstdio>
#include<string>
#include<algorithm>
#include<iostream>

using namespace std;

int dp[1001][1001][2],cnt[1001][1001][2],a[1001][1001];

bool prev[1001][1001][2];

int main(){
	int n,t,x0=0,y0=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) scanf("%d",&a[i][j]);
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++)
		if(a[i][j]==0){
			x0=i;
			y0=j;
		}else
			for(int k=2;k<6;k+=3){
				t=a[i][j];
				while(t>0&&t%k==0){
					cnt[i][j][k/3]++;
					t/=k;
				}
			}
	for(int k=0;k<2;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(dp[i-1][j][k]<dp[i][j-1][k]&&i>1||j==1){
					dp[i][j][k]=dp[i-1][j][k]+cnt[i][j][k];
					prev[i][j][k]=0;
				}else{
					dp[i][j][k]=dp[i][j-1][k]+cnt[i][j][k];
					prev[i][j][k]=1;
				}
	bool track=(dp[n][n][0]>dp[n][n][1]);
	if(x0&&y0&&dp[n][n][track]>=1){
		printf("1\n");
		for(int i=1;i<x0;i++) printf("D");
		for(int j=1;j<y0;j++) printf("R");
		for(int i=x0;i<n;i++) printf("D");
		for(int j=y0;j<n;j++) printf("R");
		printf("\n");
		return 0;
	}
	printf("%d\n",dp[n][n][track]);
	int s = 2*n-3;
	int x, y;
	x = y = n;
	string ss = "";
	while(s >= 0){
		if(prev[y][x][track]){
			x--;
			ss += "R";
		}
		else{
			y--;
			ss += "D";
		}
		s--;
	}
	reverse(ss.begin(), ss.end());
	cout << ss << endl;
	return 0;
}
