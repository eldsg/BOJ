#include <bits/stdc++.h>

int tree[333333];
int val[333333];
void update(int *tree, int index, int val){
	index++;
	while(index <= 333333){
		tree[index] += val;
		index += (index & -index);
	}
}

int sum(int *tree, int index){
	index++;
	int ans = 0;
	while(index > 0){
		ans += tree[index];
		index -= (index & -index);
	}
	return ans;
}
int getMid(int v){
	int low = 0, high = 333333, m;
	while(low < high){
		int m = (low+high)/2;
		if(sum(tree, m) < v){
			low = m+1;
		}
		else high = m;
	}
	return low;
}
int n, k, m;
long long ret = 0;
int main(){
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= k; i++){
		scanf("%d", &val[i]);
		update(tree, val[i], 1);
	}
	ret += getMid((k+1)/2);
	for(int i = k+1; i <= n; i++){
		update(tree, val[i-k], -1);
		scanf("%d", &val[i]);
		update(tree, val[i], 1);
		ret += getMid((k+1)/2);
	}
	printf("%lld\n", ret);
}