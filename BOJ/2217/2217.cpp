#include <bits/stdc++.h>

using namespace std;

int lope[100001];
int n, ret = -1;
int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &lope[i]);
	sort(lope, lope+n);
	for(int i = 0; i < n-1; i++){
		ret = max(ret, (n-i)*lope[i]);
	}
	printf("%d\n", ret);
}