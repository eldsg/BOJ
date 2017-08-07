#include <bits/stdc++.h>
using namespace std;
int tip[100001];
int n;
long long ret = 0;
int main(){
	scanf("%d", &n);
	for(int i = 0; i < n ; i++) scanf("%d", &tip[i]);
	sort(tip, tip+n, greater<int>());
	for(int i = 0; i < n; i++){
		if(tip[i] - (i) > 0) ret += tip[i]-i;
	}
	printf("%lld\n", ret);
}