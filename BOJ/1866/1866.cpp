#include <bits/stdc++.h>

using namespace std;

int n;
int pack[3001];
int dp[3001];
int wp, ap, temp;
int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) scanf("%d", &pack[i]);
	sort(pack+1, pack+n+1);
	scanf("%d%d", &wp, &ap);
	for(int i = 1; i <= n; i++){
		dp[i] = wp*pack[i] + dp[i-1];
		temp = ap;
		for(int j = i; j; j--){
			temp += (pack[(i+j+1)/2]-pack[j])*wp;
			dp[i] = min(dp[i], dp[j-1]+temp);
		}
	}
	printf("%d\n", dp[n]);
}