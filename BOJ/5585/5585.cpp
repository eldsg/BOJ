#include <bits/stdc++.h>

int n[8] = {500, 100, 50, 10, 5, 1};

int main(){
	int num;
	scanf("%d", &num);
	int k = 1000-num;
	int ret = 0;
	for(int i = 0; i < 6; i++){
		ret += k/n[i];
		k%=n[i];
	}
	printf("%d\n", ret);
}