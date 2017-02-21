#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>


using namespace std;

vector<pair<int, int> > start;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int b, c;
		scanf("%d %d", &b, &c);
		start.push_back(make_pair(b, 1));
		start.push_back(make_pair(c, 0));
	}
	sort(start.begin(), start.end());
	int count = 0, ret = 0;
	for(int i = 0; i < start.size(); i++){
		if(start[i].second) count++;
		else count--;
		ret = max(ret, count);
	}
	printf("%d\n", ret);
}
