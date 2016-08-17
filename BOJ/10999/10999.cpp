#include<cstdio>
#include<vector>
using namespace std;
long long sum(vector<long long> &tree, int i){
	long long ans = 0;
	while(i > 0){
		ans += tree[i];
		i -= (i & -i);
	}
	return ans;
}
void update(vector<long long> &tree, int i, long long diff){
	while(i < tree.size()){
		tree[i] += diff;
		i += (i & -i);
	}
}
int main(){
 	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	vector<long long> tree(a+1);
	for(int i = 1; i<=a; i++){
		int k;
		scanf("%d", &k);
		update(tree, i, k);
	}
	for(int i = 0; i<b+c; i++){
		int control, d, e;
		long long int f;
		scanf("%d", &control);
		if(control == 1){
			scanf("%d %d %lld", &d, &e, &f);
			for(int j = d; j<=e; j++){
				update(tree, j, f);
			}
		}
		else{
			scanf("%d %d", &d, &e);
			printf("%lld\n", sum(tree, e)-sum(tree, d-1));
		}
	}
}
