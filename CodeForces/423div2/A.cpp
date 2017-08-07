#include <bits/stdc++.h>

int n, a, b, k;

int main(){
	scanf("%d%d%d", &n, &a, &b);
	int restb = b*2;
	int deny = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &k);
		if(k == 1){
			if(a > 0) a--;
			else if((a == 0) && b){
				b--;
				restb--;
			}
			else if(restb){
				restb--;
			}
			else deny++;
		}
		else{
			if(b){
				b--;
				restb-=2;
			}
			else deny+=2;
		}
	}
	printf("%d\n", deny);
}