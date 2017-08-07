#include <bits/stdc++.h>
using namespace std;
int n[1001], dp1[1001], dp2[1001], t;
int main(){
	scanf("%d", &t);
	for(int i = 0; i < t; i++) scanf("%d", &n[i]);
	for(int i = 0; i < t; i++){
		dp1[i] = 1;
		for(int j = 0; j < i; j++){
			if(n[i] > n[j] && dp1[i] < dp1[j]+1) dp1[i] = dp1[j]+1;
		}
	}
	for(int i = t-1; i >= 0; i--){
		dp2[i] = 1;
		for(int j = t-1; j > i; j--){
			if(n[i] > n[j] && dp2[i] < dp2[j]+1) dp2[i] = dp2[j]+1;
		}
	}
	int ret = dp1[0] + dp2[0] - 1;
	for(int i = 1; i < t; i++){
		ret = max(ret, dp1[i]+dp2[i]-1);
	}
	printf("%d\n", ret);
}