#include <bits/stdc++.h>

using namespace std;

vector<int> a;
vector<int> b;
vector<int> ret;
int main(){
	int n, m, cnt = 0;;
	scanf("%d%d", &n, &m);
	a.resize(n), b.resize(m);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < m; i++) scanf("%d", &b[i]);
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(int i = 0; i < n; i++){
		if(!binary_search(b.begin(), b.end(), a[i])){
			ret.push_back(a[i]);
		}
	}
	printf("%d\n", ret.size());
	for(int i = 0; i < ret.size(); i++) printf("%d ", ret[i]);
	puts("");
}