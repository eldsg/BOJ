#include <bits/stdc++.h>

int tree[111111], n;
int ind[111111];
int num[111111];
int sum(int *t, int index){
    int ans = 0;
    while(index > 0){
        ans += t[index];
        index -= (index & -index);
    }
    return ans;
}

void update(int *t, int index, int num){
    while(index <= 111111){
        t[index] += num;
        index += (index & -index);
    }
}

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &num[i]);
		update(tree, i, 1);
		ind[num[i]] = i;
	}
	int k = 1, kk = n;
	
	for(int i = 1; i <= n; i++){
		if(i%2== 1){
			//printf("%d\n", );
			printf("%d\n", sum(tree, ind[k]) - 1);
			update(tree, ind[k], -1);
			//printf("%d %d\n", sum(tree, ind[k]));
			k++;
		}
		else{	
			//printf("%d\n", k);
			printf("%d\n", sum(tree, 111111) - sum(tree, ind[kk]));
			update(tree, ind[kk], -1);
			kk--;
		}
	}
}