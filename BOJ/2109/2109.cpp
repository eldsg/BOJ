#include <bits/stdc++.h>
using namespace std;
int n, res = 0;
pair<int, int> ret[10001];
priority_queue<int> pq;
int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d%d", &ret[i].second, &ret[i].first);
	}
	sort(ret, ret+n);
	for(int i = 0; i < n; i++){
		res += ret[i].second;
		pq.push(-ret[i].second);
		if(pq.size() > ret[i].first) res += pq.top(), pq.pop();
	}
	printf("%d\n", res);
}