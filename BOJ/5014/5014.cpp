#include<cstdio>
#include<queue>

using namespace std;

queue<int> GANGHO;
bool visit[1000001];

int main(){
	int f, s, g, u, d, ret = 0;
	scanf("%d%d%d%d%d", &f, &s, &g, &u, &d);
	GANGHO.push(s);
	int mv[2] = { u, d };
	visit[s] = true;
	while(!GANGHO.empty()){
		int s = GANGHO.size();
		while(s--){
			int cs = GANGHO.front();
			if(cs == g){
				printf("%d\n", ret);
				return 0;
			}
			GANGHO.pop();
			for(int i = 0; i < 2; i++){
				int ns;
				if(!i) ns = cs + mv[i];
				if(i) ns = cs - mv[i]; 
				if(ns < 1 || ns > f) continue;
				if(visit[ns]) continue;
				GANGHO.push(ns);
				visit[ns] = true;
			}
		}
		ret++;
	}
	puts("use the stairs");
}
