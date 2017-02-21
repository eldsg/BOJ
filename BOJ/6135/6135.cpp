#include<cstdio>
#include<vector>
#include<queue>
#include<cstdlib>
#include<map>
#include<cstring>

#define INF 1e9

using namespace std;

vector<vector<int> >graphdist;
void proc(){

}

int main(){
	int a, b, query;
	scanf("%d %d %d", &a, &b, &query);
	graphdist.resize(a+2);
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a; j++){
			graphdist[i].push_back(INF);
			if(i==j)graphdist[i][j]=0;
		}
	}
	for(int i = 0; i < b; i++){
		int c, d, e;
		scanf("%d %d %d", &c, &d, &e);
		graphdist[c-1][d-1]=e;
	}
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a; j++){
			for(int k = 0; k < a; k++){
				int road = max(graphdist[k][i], graphdist[i][j]);
				if(graphdist[k][j] > road){
					graphdist[k][j] = road;
				}
			}
		}
	}

	for(int i = 1; i <= query; i++){
		int c, d;
		scanf("%d %d", &c, &d);
		if(graphdist[c-1][d-1] == INF) printf("-1\n");
		else printf("%d\n", graphdist[c-1][d-1]);
	}
}

