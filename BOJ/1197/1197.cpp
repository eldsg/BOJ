#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct data{
	int s,e,d;
}data;
bool comp(data a, data b){
	return a.d < b.d;
}
int p[10001];
data d[100001];

int check(int n){
	if(n==p[n]) return n;
	return p[n] = check(p[n]);
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i =1; i<= a; i++) p[i] = i;
	for(int i =0; i< b; i++) scanf("%d%d%d", &d[i].s, &d[i].e, &d[i].d);
	sort(d, d+b, comp);
	int ret = 0;
	for(int i = 0; i < b; i++){
		int k = check(d[i].s);
		int l = check(d[i].e);
		if(k!=l){
			ret += d[i].d;
			p[k] = l;
		}
	}
	printf("%d\n", ret);
}
