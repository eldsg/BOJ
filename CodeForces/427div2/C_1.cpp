#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int> > star;
map<pair<int, int>, vector<int> > starcost;
int main(){
	int n, q, c;
	scanf("%d%d%d", &n, &q, &c);
	for(int i = 0; i < n; i++){
		int x, y, s;
		scanf("%d %d %d", &x, &y, &s);
		star.push_back({x,y});
		starcost[{x,y}].push_back(s);
	}
	sort(star.begin(), star.end());
	for(int i = 0; i < q; i++){
		int t, x0, x1, y0, y1;
		int ret = 0;
		scanf("%d%d%d%d%d", &t, &x0, &y0, &x1, &y1);
		int lower = lower_bound(star.begin(), star.end(), make_pair(x0, y0)) - star.begin();
		int upper = upper_bound(star.begin(), star.end(), make_pair(x1, y1)) - star.begin();
		for(lower; lower < upper; lower++){
			//printf("%d %d\n", star[lower].first, star[lower].second);
			for(auto g : starcost[{star[lower].first, star[lower].second}]){
				ret += (t+g) %(c+1);
			}
		}
		printf("%d\n", ret);
	}
}