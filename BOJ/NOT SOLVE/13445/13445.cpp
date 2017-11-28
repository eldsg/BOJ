#include <bits/stdc++.h>

using namespace std;

map<pair<int, int>, int> dp;

int main(){
	int n, k, num, ret = 0;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++){
		scanf("%d", &num);
		dp[{i, i}] = num;
	}
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(dp[{i, j}]) {
				if(dp[{i, j}] < k) ret++;
				continue;
			}
			else{
				dp[{i, j}] = dp[{i, j-1}] ^ dp[{j, j}];
				if(dp[{i, j}] < k) ret++;
			}
		}
	}
	printf("%d\n", ret);
}