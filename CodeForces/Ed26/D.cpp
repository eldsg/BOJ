#include <bits/stdc++.h>

using namespace std;

int n, k;
long long two, five;
long long num[222];
pair<int, int> tf[222];
pair<int, pair<int, int> > tf3[222];
long long a, b;
bool cmp(pair<int,pair<int, int> > a, pair<int,pair<int, int> > b){
	if(a.first == b.first) return a.second.first > b.second.first;
	return a.first > b.first;
}
bool cmp2(pair<int, int> a, pair<int,int> b){
	return a.first+a.second > b.first+b.second;
}
int main(){
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++) {
		two = five = 0;
		scanf("%lld", &num[i]);
		a = b = num[i];
		while(a%5==0){
			a/=5; five++;
		}
		while(b%2==0){
			b/=2; two++;
		}
		tf[i].first = two, tf[i].second = five;
	}


	printf("%lld\n", min(two, five));
}