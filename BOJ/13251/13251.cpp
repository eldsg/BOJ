#include<cstdio>

long long dp[51][51];
int nums[51];
long long bio(int a, int b){
	if(a==b || b == 0) return 1;
	if(b == 1) return a;
	if(dp[a][b]) return dp[a][b];
	return dp[a][b] = bio(a-1,b-1)+bio(a-1,b);
}

int main(){
	long long a, total = 0, k, up=0;
	scanf("%lld", &a);
	for(int i = 0; i < a; i++){
		scanf("%d", nums+i);
		total += nums[i];
	}
	scanf("%lld", &k);
	for(int i = 0; i < a; i++){
		if(nums[i] >= k) up += bio(nums[i], k);
	}
	double ret = up;
	for(int i = k; i >=1; i--){
		ret *= (double)i;
		ret /= (double)(total-i+1);
	}
	printf("%.15lf\n", ret);
}
