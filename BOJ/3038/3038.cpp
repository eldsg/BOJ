#include <bits/stdc++.h>

int temp, n;

void proc(int i, int j){
	if(j == 1 << n-1){
		printf("%d ", j*3-1-i);
		return ;
	}
	printf("%d ", i);
	proc(i+j, 2*j);
	proc(i+2*j, 2*j);
}
/*
6, 3

(6, 3), (6-4, 2), (2-)
*/
int main(){
	scanf("%d", &n);
	proc(1,1);
}