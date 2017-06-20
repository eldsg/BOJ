#include<cstdio>
#include<cmath>
#define ll long long
int main(){
	ll n, m, a;
	scanf("%lld%lld%lld", &n, &m, &a);
	n = ceil((double)n/a);
	m = ceil((double)m/a);
	printf("%lld\n", n*m);
}
