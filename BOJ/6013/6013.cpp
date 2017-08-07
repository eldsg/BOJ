#include <bits/stdc++.h>
using namespace std;
int n;
pair<int, int> cow[501];
int proc(pair<int, int> a, pair<int, int> b){
	int k = abs(b.first-a.first);
	int kk = abs(b.second-a.second);
	return k*k+kk*kk;
}
int main(){
	scanf("%d", &n);
	int max = -1, l, r;
	for(int i = 0; i < n; i++) scanf("%d%d", &cow[i].first, &cow[i].second);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int ret = proc(cow[i], cow[j]);
			if(max < ret){
				max = ret, l = i, r = j;
			}
		}
	}
	printf("%d %d\n", l+1, r+1);
}