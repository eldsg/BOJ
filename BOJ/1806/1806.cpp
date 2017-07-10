#include <bits/stdc++.h>

const int MAXN = 100000;
int num[MAXN+1];

int main(){
	int n, s;
	scanf("%d%d", &n, &s);
	for(int i = 0; i < n; i++){
		scanf("%d", num+i);
	}
	int ret = INT_MAX;
	for(int i = 0; i < n; i++){
		long long sum = num[i];
		int cnt = 1;
		if(sum >= s){
			ret = cnt;
			break;
		}
		for(int j = i+1; j < n; j++){
			sum += num[j], cnt++;
			if(sum >= s){
				if(ret > cnt) ret = cnt;
				break;
			}
		}
	}
	printf("%d\n", ret == INT_MAX ? 0 : ret);
}