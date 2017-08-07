#include <bits/stdc++.h>

long long proc(long long n, long long k){
	if(n == 1LL) return 0LL;
	if(k == 1LL) return n-1LL;
	if(k > n) return (proc(n-1ll,k)+k)%n;
	long long cnt = n/k;
	long long res = proc(n-cnt, k);
	res-=n%k;
	if( res < 0ll) res +=n;
	else res += res/(k-1ll);
	return res;
}

int main(){
	long long n, k;
	scanf("%lld%lld", &n, &k);
	printf("%lld\n", proc(n, k)+1);
}