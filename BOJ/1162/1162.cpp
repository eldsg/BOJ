#include<cstdio>
#include<vector>
#include<cstring>
#include<queue>
#include<algorithm>

using namespace std;

vector<vector<pair<int, int> > >city;
long long dp[10001][21];
int a, b, c, d, e, f;
void proc(){
	priority_queue<pair<long long, pair<int, int> > > que;
	que.push(make_pair(0, make_pair(1, c)));
	dp[1][c] = 0;
	while(!que.empty()){
		int start = que.top().second.first;
		int count = que.top().second.second;
		long long weight = que.top().first * -1;
		que.pop();
		if(dp[start][count] <= weight){
			int size = city[start].size();
			for(int i = 0; i < size; i++){
				int next = city[start][i].first;
				long long cost = city[start][i].second + weight;
				if(count > 0 && weight < dp[next][count-1]){
					dp[next][count-1] = weight;
					que.push(make_pair(weight*-1, make_pair(next, count-1)));
				}
				if(cost < dp[next][count]){
					dp[next][count] = cost;
					que.push(make_pair(cost*-1, make_pair(next, count)));
				}
			}
		}
	}
}

int main(){
	scanf("%d%d%d", &a, &b, &c);
	city.resize(a+1);
	for(int i = 0; i <= a; i++){
		for(int j = 0; j <= c; j++){
			dp[i][j] = 1e10+1;
		}
	}
	for(int i = 0; i < b; i++){
		scanf("%d%d%d", &d, &e, &f);
		city[d].push_back(make_pair(e,f));
		city[e].push_back(make_pair(d,f));
	}
	proc();
	sort(dp[a], dp[a]+c);
	printf("%lld\n", dp[a][0]);
}
