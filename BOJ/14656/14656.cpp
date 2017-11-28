#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, ret = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &k);
		if(k != i) ret++;
	}
	printf("%d\n", ret);
}