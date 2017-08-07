#include <bits/stdc++.h>

using namespace std;
vector<int> ab;
vector<int> cd;
int a[4001], b[4001], c[4001], d[4001];
int main(){
	int n, i, j, index=0;
    long long ret = 0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
        scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
            ab.push_back(a[i]+b[j]);
            cd.push_back(c[i]+d[j]);
		}
	}
	sort(ab.begin(), ab.end());
	for(auto i : cd){
        auto range = equal_range(ab.begin(), ab.end(), -i);
        ret += 1ll*(range.second-range.first);
	}
	printf("%lld\n", ret);

}
