#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<queue>
#include<cstring>

using namespace std;

bool visit[100001];
int countt[100001];
queue<int> ret;

int n, s, d, f, b, k;
void proc(int start){
	memset(countt, 0, sizeof(countt));
	ret.push(start);
	visit[start] = 1;
	int res;
	while(!ret.empty()){
		if(ret.front()-b >= 1 && !visit[ret.front()-b]){
			visit[ret.front()-b] = true;
			countt[ret.front()-b] = countt[ret.front()]+1;
			ret.push(ret.front()-b);
			if(ret.front()-b == d){
				break;
			}
		}
		if(ret.front()+f <= n && !visit[ret.front()+f]){
			visit[ret.front()+f] = true;
			countt[ret.front()+f] = countt[ret.front()]+1;
			ret.push(ret.front()+f);
			if(ret.front()+f == d){
				break;
			}
		}
		ret.pop();
	}
	countt[d] == 0 ? printf("BUG FOUND\n") : printf("%d\n", countt[d]);
}

int main(){
	memset(visit, false, sizeof(visit));
	scanf("%d %d %d %d %d %d", &n, &s, &d, &f, &b, &k);
	for(int i = 0; i < k; i++){
		int police;
		scanf("%d", &police);
		visit[police] = true;
	}
	proc(s);
}
