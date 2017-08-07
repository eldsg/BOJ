#include <bits/stdc++.h>
int tc, n, k, kk;
int video[111111];
int tree[222222];
int sum(int index){
	int ans = 0;
	while(index > 0){
		ans += tree[index];
		index -= (index & -index);
	}
	return ans;
}

void update(int index, int num){
	while(index < 222222){
		tree[index] += num;
		index += (index & -index);
	}
}

int main(){
	scanf("%d", &tc);
	while(tc--){
		memset(video, 0, sizeof(video));
		memset(tree, 0, sizeof(tree));
		scanf("%d%d", &n, &k);
		for(int i = 1; i <= n; i++){
			video[i] = i+k;
			update(i+k, 1);
		}
		for(int i = 0; i < k; i++){
			scanf("%d", &kk);
			//printf("%d ", video[kk]);
			printf("%d ", sum(video[kk])-1);
			update(video[kk], -1);
			video[kk] = k-i;
			update(video[kk], 1);
		}
		puts("");
	}
}