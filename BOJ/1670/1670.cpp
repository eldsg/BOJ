#include<cstdio>
#include<cstring>

#define ll long long
#define MOD 987654321
ll dp[10001];

ll proc(int n){
	if(n == 0) return 1;
	if(n == 1) return 0;
	ll &ret = dp[n];
	if(ret != -1) return ret;
	ret = 0;
	for(int i = 2; i <= n; i++){
		ret = (ret +( proc(i-2) * proc(n-i)) % MOD)%MOD;
	}
	return ret;
}

int main(){
	int n;
	memset(dp, -1, sizeof(dp));
	scanf("%d", &n);
	printf("%lld\n", proc(n));
}
