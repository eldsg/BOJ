#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(pair<int, int> a, pair<int,int> b){
	if(a.second == b.second) return a.first < b.first;
	else return a.second < b.second;
}

int main(){
	int num;
	scanf("%d", &num);
	vector<pair<int, int> > ret;
	while(num--){
		int a, b;
		scanf("%d %d", &a, &b);
		ret.push_back(make_pair(a,b));
	}
	sort(ret.begin(), ret.end(), comp);
	for(int i = 0; i < ret.size(); i++){
		printf("%d %d\n", ret[i].first, ret[i].second);
	}
}
