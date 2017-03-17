#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

vector<pair<int, int> > ret;

bool comp(pair<int, int> a, pair<int, int> b){
	if(a.first == b.first) return a.second < b.second;
	return a.first > b.first;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int nums;
		scanf("%d", &nums);
		ret.clear();
		ret.resize(nums+1);
		for(int i = 0; i < nums; i++) scanf("%d %d", &ret[i].first, &ret[i].second);
		sort(ret.begin(), ret.end());
		for(int i = 0; i < nums; i++){
			printf("%d %d\n", ret[i].first, ret[i].second);
		}
	}
}
