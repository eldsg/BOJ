#include <bits/stdc++.h>

int n, k;

int main(){
	scanf("%d%d", &n, &k);
	if(n-k == 1){
		puts("2");
		for(int i = 2; i<=n; i++) printf("1 %d\n", i);
	}
	else{
		int ret;
		if( ((n-1)%k) == 1) ret = (n-1)/k + ((n-1)/k)+1;
		else if( ((n-1)%k) >= 2) ret = 2*((n-1)/k+1);
		else ret = 2*(n-1)/k;
		printf("%d\n", ret);
		int t = 2;
		for(int i = 1; i <= n; i++){
			for(t; t <= i+k; t++){
				if(t > n) break;
				printf("%d %d\n", i, t);
			}
			if(t > n) break;
		}
	}
}