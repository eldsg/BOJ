#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int> > r;
int n, a, b, ret = 0;
int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d%d", &a, &b);
		r.push_back({b, a});
	}
	sort(r.begin(), r.end());
	int t = -1;
	for(int i = 0; i < n ; i++){
		if(r[i].second >= t){
			t = r[i].first;
			ret++;
		}
	}
	printf("%d\n", ret);
}
