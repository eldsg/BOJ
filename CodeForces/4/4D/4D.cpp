#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

#define pii pair<int ,int>
#define mp make_pair
#define pb push_back

vector<pair<pii, int > > wh;
int dp[5001] = {1, };
int pos[5001];
int path[5001];
int main(){
	int n, w, h, ret = -1, bt;
	scanf("%d%d%d", &n, &w, &h);
	wh.push_back(mp(mp(w,h), -1));
	for(int i = 0; i < n; i++){
		int a, b;
		scanf("%d%d", &a, &b);
		if(a < w || b < h) continue;
		else wh.push_back(mp(mp(a,b), i+1));
	}
	sort(wh.begin()+1, wh.end());
	memset(pos, -1, sizeof(pos));
	for(int i = 0; i < wh.size(); i++){
		dp[i] = 1;
		for(int j = 0; j < i; j++){
			if(wh[j].first.first < wh[i].first.first && wh[j].first.second < wh[i].first.second && dp[i] < dp[j]+1){
				dp[i] = dp[j]+1;
				pos[wh[i].second] = wh[j].second;
			}
		}
		if(ret < dp[i]){
			ret = dp[i];
			bt = wh[i].second;
		}
	}
	path[0] = bt;
	int cnt = 1;
	while(pos[bt] != -1){
		path[cnt++] = pos[bt];
		bt = pos[bt];
	}
	if(ret == 1) puts("0");
	else {
		printf("%d\n", ret-1);
		for(int i = cnt-1; i>=0; i--) printf("%d ", path[i]);
		puts("");
	}

}
