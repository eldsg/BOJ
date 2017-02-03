#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int miro[1001][1001];
int ret[1001][1001];
int a, b;

int main(){
	int i, j;
	scanf("%d %d", &a, &b);
	for(i = 1; i <= a; ++i){
		for(j = 1; j <= b; ++j){
			scanf("%d", &miro[i][j]);
		}
	}
	for(i = 1; i <= a; ++i){
		for(j = 1; j <= b; ++j){
			int maximum;
			maximum = max(ret[i-1][j], ret[i][j-1]);
			ret[i][j] = maximum + miro[i][j];
		}
	}
	printf("%d\n", ret[a][b]);
}
