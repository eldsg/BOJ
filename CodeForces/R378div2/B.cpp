#include <bits/stdc++.h>
using namespace std;
int t, a[100001], b[100001];
int asum = 0, bsum = 0;
int change, ret = 0;
int main(){
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		scanf("%d %d", &a[i], &b[i]);
		asum += a[i]; bsum += b[i];		
	}
	change = abs(asum - bsum);
	for(int i = 0; i < t; i++){
		int asumc = asum - a[i] + b[i];
		int bsumc = bsum - b[i] + a[i];
		if(abs(asumc-bsumc) > change){
			ret = i+1;
			change = abs(asumc-bsumc);
		}
	}
	printf("%d\n", ret);
}