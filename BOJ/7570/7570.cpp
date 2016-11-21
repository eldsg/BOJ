#include<cstdio>
#include<cstdlib>
#include<algorithm>

int child[1000001];
int dp[1000001];
int n;

void process(){
	int size = 0;
	for(int i = 0; i < n; i++){
		int s = dp[child[i]], j;
		for(j = child[i]+1; dp[j] > s; j++) s=dp[j];
		size = size < j-child[i] ? j-child[i] : size;
	}
	printf("%d\n", n-size);
}

int main(){
	scanf("%d", &n);
	for(int i = 0; i<n; i++) scanf("%d", &child[i]), dp[child[i]] = i;
	process();
}
