#include <bits/stdc++.h>
using namespace std;
int n, m, k, i, j, l;
int num[505];
int main(){
	scanf("%d%d%d", &n, &m, &k);
	if(m*k < n || m+k > n+1) return puts("-1");
	for(i = 0; i < n; i++) num[i] = i+1;
	for(i = 1; i <= m; i++){
		l = min(j+k, n-m+i);
		reverse(num+j, num+l);
		j = l;
	}
	for(int i = 0; i < n; i++){
		printf("%d ", num[i]);
	}
}