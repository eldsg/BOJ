#include<cstdio>
#include<iostream>
#include<map>

using namespace std;

map<long long, long long> ret;

int main(){
	int a, b;
	scanf("%d", &a);
	while(a--){
		int t;
		scanf("%d", &t);
		ret[t]++;
	}
	scanf("%d", &b);
	while(b--){
		int t;
		scanf("%d", &t);
		printf("%lld ", ret[t]);
	}
}
