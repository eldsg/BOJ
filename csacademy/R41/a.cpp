#include <bits/stdc++.h>

using namespace std;

int n, ret = 0;
int num[1001];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> num[i];
	sort(num, num+n);
	for(int i = 0; i < n; i+=2){
		ret += abs(num[i] - num[i+1]);
	}
	cout << ret << endl;
}