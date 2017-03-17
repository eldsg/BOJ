#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

#define upp 1e9

int dp[501][501];
int nums[501];
int sums[501];

int min(int i, int j){
	return i > j ? j : i;
}
int process(int l, int r){
	if(l >= r) return 0;
	if(l+1 == r) return nums[l] + nums[r];
	int &ret = dp[l][r];
	if(ret < upp) return ret;
	for(int i = l; i < r; i++){
		ret = min(ret, process(l, i)+process(i+1, r) + sums[r]-sums[l-1]);
	}
	return ret;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int num;
		memset(dp, -1, sizeof(dp));
		scanf("%d", &num);
		for(int i = 1; i <= num; i++) scanf("%d", nums+i), sums[i] = sums[i-1] + nums[i];
		for(int i = 1; i <= num; i++) for(int j = 1; j <= num; j++) dp[i][j] = upp;
		printf("%d\n", process(1, num));
	}
}
