#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, x, y, m;
	scanf("%d", &t);
	while(t--){
		int ret = 0, s;
		vector<pair<int, int> > mos;
		scanf("%d", &n);
		while(n--){
			scanf("%d%d", &x, &y);
			mos.push_back({x,y});
		}
		s = mos.size();
		scanf("%d", &m);
		while(m--){
			scanf("%d%d", &x, &y);
			for(int i = 0; i < s; i++){
				if(mos[i].first <= x+50 && mos[i].first >= x-50 && mos[i].second <= y+50 && mos[i].second >= y-50){
					ret++;
					mos[i].first = mos[i].second = 1e9;
				}
			}
		}
		printf("%d\n", ret);
	}
}