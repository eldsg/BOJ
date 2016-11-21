#include<cstdio>
#include<cstdlib>
#include<cstring>

unsigned long long res[2501];
unsigned long long proc(int n){
	if(res[n] != -1) return res[n];
	unsigned long long ans = 0;
	if(n==0) ans=1;
	for(int i = 1; i <= n; i++){
		ans = ans +proc(i-1)*proc(n-i);
	}
	return res[n] = ans;
}

int main(){
	int t;
	memset(res, -1, sizeof(res));
	int num;
	scanf("%d", &num);
	printf("%llu\n", proc(num));
}
