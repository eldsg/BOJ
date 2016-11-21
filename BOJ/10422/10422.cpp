#include<cstdio>
#include<cstdlib>
#include<cstring>

unsigned long long mod = 1000000007;
unsigned long long res[2501];
unsigned long long proc(int n){
	if(res[n] != -1) return res[n];
	unsigned long long ans = 0;
	if(n==0) ans=1;
	for(int i = 1; i <= n; i++){
		ans = (ans +(proc(i-1)%mod)*(proc(n-i)%mod))%mod;
	}
	return res[n] = ans;
}

int main(){
	int t;
	scanf("%d", &t);
	memset(res, -1, sizeof(res));
	while(t--){
		int num;
		scanf("%d", &num);
		if(num%2) printf("0\n");
		else{
			printf("%llu\n", proc(num/2));
		}
	}
}
