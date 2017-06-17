#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>

using namespace std;

vector<vector<int> > ret(222222);
queue<int> cube;
bool temp[222222];
int main(){
	int n, k, m;
	scanf("%d%d%d", &n, &k, &m);
	for(int i = n+1; i < n+1+m; i++){
		for(int j = 0; j < k; j++){
			int ver;
			scanf("%d", &ver);
			ret[ver].push_back(i);
			ret[i].push_back(ver);
		}
	}
	memset(temp, false, sizeof(temp));
	temp[1] = true;
	cube.push(1);
	int cnt = 0;
	while(!cube.empty()){
		int s = cube.size();
		cnt++;
		while(s--){
			int now = cube.front();
			cube.pop();
			if(now == n){
				printf("%d\n", cnt/2+1);
				return 0;
			}
			for(int i = 0; i < ret[now].size(); i++){
				if(temp[ret[now][i]]) continue;
				cube.push(ret[now][i]);
				temp[ret[now][i]] = true;
			}
		}
	}
	puts("-1");
}
