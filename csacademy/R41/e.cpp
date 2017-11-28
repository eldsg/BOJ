#include <bits/stdc++.h>

using namespace std;

int n, m, k;
vector<int> candle;
vector<int> temp;
int use, ret;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		cin >> k;
		candle.push_back(k);
	}
	sort(candle.begin(), candle.end(), greater<int>());
	int minc = candle[n-1];
	int maxc = candle[0];
	int maxx = candle.size();
	for(int j = 0; j < m; j++){
		cin >> use;
		if(candle.size() < use) break;
		ret++;
		for(int i = 0; i < use; i++) candle[use]--;
	}
	cout << ret << endl;
}