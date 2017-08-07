//범위가 5*9라 bfs로 해결 가능 bfs안에 들어가는 상태가 pin의 현재 위치상태 정신나간 풀이인듯

#include <bits/stdc++.h>

using namespace std;

int tc;

char m[10][10];
int my[4] = {0, 0, 1, -1};
int mx[4] = {1, -1, 0, 0};
int ans[64];
int main(){
	scanf("%d ", &tc);
	while(tc--){
		int ret = 1e9, move = 0;
		for(int i = 0; i < 64; i++) ans[i] = 1e9;
		vector<pair<int, int> > p;
		for(int i = 0; i < 5; i++){
			for(int j = 0; j < 9; j++){
				scanf("%1c", &m[i][j]);
				if(m[i][j] == 'o') p.push_back({i, j}); 
			}
			scanf(" ");
		}
		char realm[10][10];
		queue<vector<pair<int, int> > > que;
		que.push(p);
		while(!que.empty()){
			int size = que.size();
			bool chk = false;
			move++;
			for(int ll = 0; ll < size; ll++){
				for(int i = 0; i < 5; i++) for(int j = 0; j < 9; j++) realm[i][j] = (m[i][j] == 'o' ? '.' : m[i][j]);
				vector<pair<int, int> > temp = que.front();
				que.pop();
				ret = min(ret, (int)temp.size());
				ans[ret] = min(ans[ret], move);
				if(ret == 1) {
					chk = true;
					break;
				}
				for(auto i : temp) realm[i.first][i.second] = 'o';
				for(auto i : temp){
					for(int j = 0; j < 4; j++){
						int nextx = i.first+mx[j];
						int nexty = i.second+my[j];
						if(nextx < 0 or nexty < 0 or nextx >= 9 or nexty >= 9) continue;
						if(realm[nextx][nexty] == 'o'){
							if(nextx+mx[j] >= 0 and nexty+my[j] >= 0 and nextx+mx[j] < 9 and nexty+my[j] < 9 and realm[nextx+mx[j]][nexty+my[j]] == '.'){
								vector<pair<int, int> > np;
								for(auto k : temp){
									if((k.first == nextx and k.second == nexty) or (k.first == nextx-mx[j] and k.second == nexty-my[j])) continue;
									np.push_back(k);
								}
								np.push_back({nextx+mx[j], nexty+my[j]});
								que.push(np);
							}
						}
					}
				}
			}
			if(chk) break;
		}
		printf("%d %d\n", ret, ans[ret]-1);

	}

}