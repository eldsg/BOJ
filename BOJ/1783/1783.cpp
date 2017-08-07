#include <bits/stdc++.h>
int n, m;
int main(){
	scanf("%d%d", &n, &m);
	if(n == 1) puts("1");
	else if(n == 2) printf("%d\n", std::min(4, (m+1)/2));
	else if(n >= 3 && m <= 6) printf("%d\n", std::min(4,m));
	else printf("%d\n", m-2);
}