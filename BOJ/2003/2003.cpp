#include <bits/stdc++.h>

using namespace std;

int num[10001];
int sum = 0;
int main(){
	int n, m, ret = 0;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++) scanf("%d", &num[i]);
	sum = num[0];
	int left = 0, right = 0;
	while(right < n){
		if(sum == m){
			ret++;
			sum += num[++right];
		}
		else if(sum < m){
			sum += num[++right];
		}
		else if(sum > m){
			if(left == right) sum += num[++right];
			else sum -= num[left++];
		}
	}
	printf("%d\n", ret);
}