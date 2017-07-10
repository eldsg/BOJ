#include <bits/stdc++.h>

int num[101];
int temp;
int main(){
	int n, m, pos;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++) {
		scanf("%d", num+i);
		if(!num[i]) pos = i;
	}
	for(int i = 0; i < m; i++) scanf("%d", &temp);
	if(m > 1) puts("YES");
	else{
		num[pos] = temp;
		for(int i = 0; i < n-1; i++){
			if(num[i] > num[i+1]){
				puts("YES");
				return 0;
			}
		}
		puts("NO");
	}
}