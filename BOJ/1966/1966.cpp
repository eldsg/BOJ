#include<cstdio>
#include<queue>
#include<vector>

using namespace std;

int main(){
	int tc;
	scanf("%d\n", &tc);
	while(tc--){
		vector<pair<int, bool> >ret;
		int a, b, t, pri;
		scanf("%d%d", &a, &b);
		for(int i = 0; i < a; i++){
			scanf("%d", &t);
			if(i != b) ret.push_back(make_pair(t, false));
			else{
				ret.push_back(make_pair(t, true));
			}
		}
		int r = 0, k = 0;
		while(1){
			bool check = true;
			pri = ret[k].first; 
			for(t = k; t < ret.size(); t++){
				if(ret[t].first > pri){
					ret.push_back(make_pair(ret[k].first, ret[k].second));
					check = false;
					k++;
					break;
				}
			}
			if(check){
				k++;
				r++;
				if(ret[k-1].second){
					printf("%d\n", r);
					break;
				}
			}
		}
	}
}
