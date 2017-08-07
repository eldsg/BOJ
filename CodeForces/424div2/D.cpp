#include <bits/stdc++.h>

using namespace std;

int key[2001];
int human[1001];
int ti[1001][2001];
bool visit[2001];
int n, k, office, ret = INT_MAX;
void proc(int a, int sum){
	if(sum >= ret) return ;
	if(a == n) {
		//printf("%d\n", sum);
		ret = min(ret, sum);
		return ;
	}
	for(int i = 0; i < n; i++){
		if(visit[i]) continue;
		visit[i] = true;
		int sum1 = max(sum, ti[a][i]);
		if(sum1 >= ret) return ;
		proc(a+1, sum1);
		visit[i] = false;
	}
}
int main(){
	scanf("%d%d%d", &n, &k, &office);
	for(int i = 0; i < n; i++) scanf("%d", human+i);
	for(int i = 0; i < k; i++) scanf("%d", key+i);;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			ti[i][j] = (abs((key[j]-human[i])) + abs((key[j]-office)));
		}
		sort(ti[i], ti[i]+k);
	}

	proc(0, 0);
	printf("%d\n", ret);
}