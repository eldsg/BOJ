#include <bits/stdc++.h>

using namespace std;

int num[10001];

int main(){
	int n, maxn = 0;
	scanf("%d", &n);
	for(int i = 0 ; i < n; i++) scanf("%d", num+i);
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			maxn = max(maxn, num[j]-num[i]);
		}
	}
	printf("%d\n", maxn);
}