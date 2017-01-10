#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;
vector<long long> ab;
vector<long long> cd;
int main(){
	int n, i, j, index=0, ret=0;
	int a[4001], b[4001], c[4001], d[4001];
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
	for(i=0; i<ab.size(); i++){
        auto low = lower_bound(ab.begin(), ab.end(), cd[i]*-1);
        auto upper = upper_bound(ab.begin(), ab.end(), cd[i]*-1);
        ret += upper-low;
	}
	printf("%d\n", ret);

}
