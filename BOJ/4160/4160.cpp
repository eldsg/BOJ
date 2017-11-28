#include <bits/stdc++.h>

using namespace std;
int t, num[25], sum[25];
int pre ;
void proc(int a, int b, int now){
	if(b == 0 && now > pre){
		pre = now;
	}
	if(a >= 0){
		if(abs(b) > sum[a]) return ;
		if(now + sum[a] <= pre) return ;
		proc(a-1, b + num[a], now + num[a]);
		proc(a-1, b - num[a], now + num[a]);
		proc(a-1, b, now);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(1){
		cin >> t;
		pre = 0;
		memset(sum, 0, sizeof(sum));
		memset(num, 0, sizeof(num));
		if(t == 0) break;
		for(int i = 0; i < t; i++){
			cin >> num[i];
			sum[i] = ((i==0) ? 0 : sum[i-1])+num[i];
		}
		proc(t-1, 0, 0);
		cout << sum[t-1] - pre << endl;
	}
}