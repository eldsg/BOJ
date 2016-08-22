#include<cstdio>
#include<algorithm>

int main(){
	long long int d, k, a, b, t, ret;
	scanf("%I64d %I64d %I64d %I64d %I64d", &d, &k, &a, &b, &t);
	if(k >= d) printf("%I64d\n", d*a);
	else if(k*a+t > k*b) printf("%I64d\n", k*a+(d-k)*b);
	else{
		long long cnt = d/k;
		printf("%I64d\n", k*cnt*a+(cnt-1)*t+std::min(t+(d%k)*a,(d%k)*b));
	}
}
