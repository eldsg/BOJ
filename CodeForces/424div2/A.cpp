#include <bits/stdc++.h>

int n;
int num[101];
bool up, cons, down;
int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", num+i);
	if(n == 1){
	 	puts("YES");
	 	return 0;
	}
	if(num[0] < num[1]) up = true; //up
	else if(num[0] == num[1]) cons = true; // cons
	else down = true; // down
	for(int i = 2; i < n; i++){
		if(num[i-1] < num[i]){
				if(cons || down){
					puts("NO");
					return 0;
				}
				up = true;
		}
		else if(num[i-1] == num[i]){
				if(down){
					puts("NO");
					return 0;
				}
				cons = true;
		}
		else{
			down = true;
		}
	}
	puts("YES");
}