#include <bits/stdc++.h>

int n, k, ret = 0;
int coin[11];
int main(){
	scanf("%d%d", &n, &k);
	for(int i = n-1; i >= 0; i--) scanf("%d", &coin[i]);
	for(int i = 0; i < n; i++){
		ret += k / coin[i];
		k %= coin[i];
	}
	printf("%d\n", ret);
}