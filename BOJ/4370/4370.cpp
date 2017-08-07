#include <bits/stdc++.h>
int n;
int main(){
	while(scanf("%d", &n) != EOF){
		int num = 1;
		while(1){
			num*=9;
			if(num >= n){
				 puts("Baekjoon wins.");
				 break;
			}
			num*=2;
			if(num >= n){
				puts("Donghyuk wins.");
				break;
			}
		}
	}
}