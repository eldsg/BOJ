#include <bits/stdc++.h>
using namespace std;
int n, m, k, a, b;
vector<pair<int, int> > seal;
int main(){
	scanf("%d%d%d", &n, &m, &k);
	for(int i = 0; i < n; i++){
		scanf("%d%d", &a, &b);
		seal.push_back({a,b});
	}
	int s = seal.size();
	int ret = 0;
	for(int i = 0; i < s; i++){
		for(int j = i+1; j < s; j++){
			if(seal[i].first + seal[j].first <= m && seal[i].second <= k && seal[j].second <= k) ret = max(ret, seal[i].first*seal[i].second + seal[j].first*seal[j].second);
			if(seal[i].second + seal[j].second <= k && seal[i].first <= m && seal[j].first <= m) ret = max(ret, seal[i].first*seal[i].second + seal[j].first*seal[j].second);
			
			if(seal[i].second + seal[j].second <= m && seal[i].first <= k && seal[j].first <= k) ret = max(ret, seal[i].first*seal[i].second + seal[j].first*seal[j].second);
			if(seal[i].first + seal[j].first <= k && seal[i].second <= m && seal[j].second <= m) ret = max(ret, seal[i].first*seal[i].second + seal[j].first*seal[j].second);
		
			if(seal[i].first + seal[j].second <= m && seal[i].second <= k && seal[j].first <= k) ret = max(ret, seal[i].first*seal[i].second + seal[j].first*seal[j].second);
			if(seal[i].second + seal[j].first <= m && seal[i].first <= k && seal[j].second <= k) ret = max(ret, seal[i].first*seal[i].second + seal[j].first*seal[j].second);
			
			if(seal[i].first + seal[j].second <= k && seal[i].second <= m && seal[j].first <= m) ret = max(ret, seal[i].first*seal[i].second + seal[j].first*seal[j].second);
			if(seal[i].second + seal[j].first <= k && seal[i].first <= m && seal[j].second <= m) ret = max(ret, seal[i].first*seal[i].second + seal[j].first*seal[j].second);
		}
	}
	printf("%d\n", ret);
}