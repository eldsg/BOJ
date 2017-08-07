#include <bits/stdc++.h>

using namespace std;

const int MAXN = (1 << 22)+1;

int k, maxnum = -1, n;
int num[MAXN+1000];
int num2[MAXN+1000];
void dfs(int s, int sum){
	num2[s] = sum;
	maxnum = max(maxnum, sum);
	if(s > n) return ;
	dfs(2*s, sum+num[2*s]);
	dfs(2*s+1, sum+num[2*s+1]);
}
int f(int i, int k){
	if(i > n+1) return (i-k)/2;
	f(2*i+k, k);
}

void proc(int s){
	int start = f(s, 0);
	int end = f(s, 1);
	//printf("%d %d\n", start, end);
	int m = -1;
	for(int i = start; i <= end; i++){
		m = max(num2[i], m);
	}
	//printf("%d\n", m);
	num[s] += maxnum - m;
	for(int i = start; i <= end; i++){
		num2[i] += maxnum-m;
	}
}
int main(){
	scanf("%d", &k);
	n = (1 << (k+1)) - 2;
	for(int i = 2; i <= n+1; i++){
		scanf("%d", num+i);
	}
	dfs(1, 0);
	for(int i = 2; i <= n+1; i++){
		proc(i);
	}
	int sum = 0;
	for(int i = 2; i <= n+1; i++){
		sum += num[i];
		//printf("%d ", num[i]);
	}
	printf("%d\n", sum);
}