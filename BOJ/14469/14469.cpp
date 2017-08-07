#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<int, int> > k;
int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int a, b;
		scanf("%d%d", &a, &b);
		k.push_back({a, b});
	}
	sort(k.begin(), k.end());
	k[0].second += k[0].first;
	for(int i = 1; i < n; i++){
		if(k[i-1].second > k[i].first){
			k[i].second += k[i-1].second;
		}
		else{
			k[i].second += k[i].first;
		}
	}
	printf("%d\n", k[n-1].second);
}