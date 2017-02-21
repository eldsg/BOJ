#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;

int dp[500001];
int up[100001];
int down[100001];
int main(){
	int a, b, t;
	scanf("%d %d", &a, &b);
	for(int i = 0; i < a/2; i++) scanf("%d%d", up+i, down+i);
	sort(up, up+a/2);
	sort(down, down+a/2);
	int ret2 = 1, mini = 1e9;
	for(int i = 1; i <= b; i++){
		int ret = a/2 - (lower_bound(up, up+a/2, i)-up);
		ret += a/2 - (lower_bound(down, down+a/2, b-i+1)-down);
		if(mini > ret) mini = ret, ret2=1;
		else if(mini == ret) ret2++;
	}
	printf("%d %d\n", mini, ret2);
}
