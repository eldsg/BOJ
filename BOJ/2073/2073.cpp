#include<cstdio>
#include<algorithm>

using namespace std;

int dp[100001];

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	dp[0] = 1e9;
	for(int i = 0; i < b; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		for(int j = a; j>=x; j--){
			dp[j] = max(dp[j], min(dp[j-x], y));
		}
	}
	printf("%d\n", dp[a]);
}
