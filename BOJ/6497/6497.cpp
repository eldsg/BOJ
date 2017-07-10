#include <bits/stdc++.h>

using namespace std;

typedef struct data{
	int s, e, c;
}data;

bool comp(data a, data b){
	return a.c < b.c;
}

int p[200001];
data d[200001];
int find(int n){
	if(p[n] < 0) return n;
	return p[n] = find(p[n]);
}
bool merge(int i, int j){
	int k = find(i);
	int l = find(j);
//	printf("%d %d\n", k, l);
	if(k == l) return false;
	p[l] = k;
	return true;
}
int a, b;
int main(){
	while(1){
		int ret = 0, ret1 = 0;
		scanf("%d%d", &a, &b);
		if(a == 0 && b == 0) break;
		memset(p, -1, sizeof(p));
		memset(d, 0, sizeof(d));
		for(int i = 0; i < b; i++){
			scanf("%d%d%d", &d[i].s, &d[i].e, &d[i].c);
			ret += d[i].c;
		}
		sort(d, d+b, comp);
		for(int i = 0; i < b; i++){
			if(merge(d[i].s, d[i].e)){
				//printf("%d %d\n", d[i].s, d[i].e);
				ret -= d[i].c;
			}
		}
		printf("%d\n", ret);
	}
}