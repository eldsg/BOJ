#include<cstdio>
#include<algorithm>

using namespace std;
int dp[16];
int money[16];
typedef struct table{
	int day;
	int cost;
}Table;


Table t[16];

int main(){
	int N;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d %d", &t[i].day, &t[i].cost);
		if(i + t[i].day < N) dp[i] = t[i].cost;
	}
	for(int i = 0; i < N; i++){
		for(int j = i + t[i].day; j < N; j++){
			if(j + t[j].day > N) continue;
			dp[j] = max(dp[j], dp[i]+t[j].cost);
		}
	}
	sort(dp, dp+N);
	printf("%d\n", dp[N-1]);

}
