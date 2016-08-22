#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<algorithm>

int a, b, d[1001], e[1001], dp[1001][1001];
int process(int m, int w){
	if(m==a) return 0;
	if(w==b) return 1e8;
	int &k = dp[m][w];
	if(k!=-1) return k;
	k = process(m+1, w+1) + abs(d[m]-e[w]);
	k = std::min(k, process(m, w+1));
	return k;
}

int main(){
	scanf("%d %d", &a, &b);
	for(int i = 0; i<a; i++) scanf("%d", d+i);
	for(int i = 0; i<b; i++) scanf("%d", e+i);
	std::sort(d, d+a);
	std::sort(e, e+b);
	if(a > b){
		std::swap(a, b);
		std::swap(d, e);
	}
	memset(dp, -1, sizeof(dp));
	printf("%d\n", process(0, 0));
}
