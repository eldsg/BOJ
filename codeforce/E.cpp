#include<cstdio>
#include<vector>
#include<map>

using namespace std;

map<int, int> cnt;

int main(){
	int num, root, child[2];
	scanf("%d", &num);
	vector<vector<int> > tree(num+1);
	for(int i = 0; i < num-1; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		tree[a].push_back(b);
		tree[b].push_back(a);
		cnt[a]++;
		cnt[b]++;
	}
	int k = 0;
	for(int i = 1; i<=num; i++){
		if(cnt[i]==3) root= i;
		if(cnt[i]==2) child[k++]=i;
	}

}
