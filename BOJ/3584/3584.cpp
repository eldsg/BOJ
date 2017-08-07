#include <bits/stdc++.h>

using namespace std;

map<int, int> parent;
vector<int> temp;
void find(int a){
	if(parent[a] != a) {
		temp.push_back(parent[a]);
		find(parent[a]);
	}
}
int find_2(int a){
	if(binary_search(temp.begin(), temp.end(), a)){
		return a;
	}
	return find_2(parent[a]);
}

int t, n, k, a, b;
int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		n--;
		for(int i = 0; i < n ; i++) parent[i] = i;
		while(n--){
			scanf("%d%d", &a, &b);
			parent[b] = a;
		}
		scanf("%d%d", &a, &b);
		temp.clear();
		temp.push_back(a);
		find(a);
		sort(temp.begin(), temp.end());
		printf("%d\n", find_2(b));
	}
}