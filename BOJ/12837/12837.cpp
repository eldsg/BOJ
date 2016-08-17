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
	int a, b;
	scanf("%d %d", &a, &b);
	vector<long long> t(a+1);
	for(int i = 0; i < b; i++){
		int control, c, d;
		scanf("%d %d %d", &control, &c, &d);
		if(control == 1){
			update(t, c, d);
		}
		else{
			printf("%lld\n", sum(t, d)-sum(t, c-1));
		}
	}
}
