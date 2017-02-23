#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

#define INF 1e9

vector<vector<int> >gd;

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	gd.resize(a+2);
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a; j++){
			gd[i].push_back(INF);
			if(i==j)gd[i][j] = 0;
		}
	}
	for(int i = 0, j, k; i < b; i++){
		scanf("%d%d", &j, &k);
		gd[j-1][k-1] = 1;
		gd[k-1][j-1] = 1;
	}
	for(int k = 0, j, i; k < a; k++){
		for(i = 0; i < a; i++){
			for(j = 0; j <a; j++){
				if(gd[i][j] > gd[i][k]+gd[k][j]) gd[i][j] = gd[i][k]+gd[k][j];
			}
		}
	}
	/*
	for(int i = 0; i < a; i++){
		for(int j =0; j<a; j++){
			printf("%d ", gd[i][j]);
		}
		printf("\n");
	}
	*/
	int who;
	int ret = 1e9;
	for(int i = 0; i < a; i++){
		int k = 0;
		for(int j = 0; j < a; j++){
			k += gd[i][j];
		}
		if(ret > k){
			ret = k;
			who = i+1;
		}
	}
	printf("%d\n", who);
}
