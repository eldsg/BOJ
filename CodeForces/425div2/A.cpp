#include <bits/stdc++.h>

int main(){
	long long n, k;
	scanf("%lld%lld", &n, &k);
	long long turn = n/k;
	long long ret = n%k;
	if(!(turn%2ll)){
		puts("NO");
	}
	else puts("YES");
}