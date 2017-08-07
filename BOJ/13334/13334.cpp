#include <bits/stdc++.h>
using namespace std;
int x[100001], y[100001];
pair<int, int> t[200001];
int n, dist, c, ret, s;
int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d%d", x+i, y+i);

	scanf("%d", &dist);
	for(int i = 0; i < n; i++){
		if(x[i] > y[i]) x[i]^=y[i], y[i]^=x[i], x[i]^=y[i];
		if(y[i] - x[i] > dist) continue;
		t[c++] = {y[i]-dist, -1};
		t[c++] = {x[i], 1};
	}
	sort(t, t+c);
	for(int i = 0; i < c; i++){
		printf("%d %d\n", t[i].first, t[i].second);
		s -= t[i].second;
		ret = max(ret, s);
	}
	printf("%d\n", ret);
}