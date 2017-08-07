#include <bits/stdc++.h>

using namespace std;

int tc, n, k;

int main(){
	scanf("%d", &tc);
	while(tc--){
		int ret = INT_MAX;
		int a[1001], b[1001], c[1001], d[1001];
		scanf("%d %d", &k, &n);
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		for(int i = 0; i < n; i++) scanf("%d", &b[i]);
		for(int i = 0; i < n; i++) scanf("%d", &c[i]);
		for(int i = 0; i < n; i++) scanf("%d", &d[i]);
		vector<int> ab, cd;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				ab.push_back(a[i]+b[j]);
				cd.push_back(c[i]+d[j]);
			}
		}
		sort(ab.begin(), ab.end());
		for(auto i : cd){
			auto lower = lower_bound(ab.begin(), ab.end(), k-i);
			if(lower != ab.end()){
				int l = *lower+i;
				if(abs(k-ret) > abs(k-l)) ret = l;
				if(abs(k-ret) == abs(k-l) && ret > l) ret = l;
			}
			if(lower != ab.begin()){
				int l = *--lower+i;
				if(abs(k-ret) > abs(k-l)) ret = l;
				if(abs(k-ret) == abs(k-l) && ret > l) ret = l;
			}
		}
		//puts("");
		printf("%d\n", ret);
	}
}