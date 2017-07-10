#include<cstdio>
#include<algorithm>

using namespace std;
int dp[16];
typedef struct table{
	int day;
	int cost;
}Table;

Table t[16];
int N;
int solve(int i){
	if(i == N) return 0;
	if(i > N) return -1e9;
	int &ret = dp[i];
	if(ret != -1) return ret;
	return ret = max(solve(i+1), solve(i+t[i].day)+t[i].cost); 
}

int main(){
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d %d", &t[i].day, &t[i].cost);
		dp[i] = -1;
	}
	printf("%d\n", solve(0));
}
