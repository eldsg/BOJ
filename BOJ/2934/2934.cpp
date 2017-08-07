#include <bits/stdc++.h>

using namespace std;

int tree[111111], n, a, b;

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
	for(int i = 0; i < n; i++){
		scanf("%d%d", &a, &b);
		int l = sum(tree, a);
		int r = sum(tree, b);
		//printf("%d %d\n", l, r);
		printf("%d\n", l+r);
		update(tree, a, -l); update(tree, a+1, l);
		update(tree, b, -r); update(tree, b+1, r);
		update(tree, a+1, 1); 
		update(tree, b, -1);
	}
}