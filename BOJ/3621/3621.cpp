#include <bits/stdc++.h>

const int MAXN = 100000;

int p[MAXN+1];

int main(){
	int n, d, t;
	scanf("%d%d", &n, &d);
	for(int i = 0; i < n; i++){
		scanf("%d", &t);
		p[t]++;
	}
	int ret = 0;
	int z = 0;
	for(int i = 0; i < n; i++){
		while(p[i] > d){
			int prev = p[i];
			ret += p[i]/=d;
			p[i] += prev%d;
		}
	}
	printf("%d\n", ret);
}