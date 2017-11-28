#include <bits/stdc++.h>

using namespace std;

/*

(j / i) == prev overflow check

*/

#define maxn 1e7+1
const long long int kk = 1e14;


bool sosu[10000001] = {true, true, false };
vector<unsigned long long> almostsosu;

void init(){
	for(int i = 2; i <= sqrt(maxn); i++){
		if(!sosu[i]){
			for(int j = i+i; j <= maxn; j+=i){
				sosu[j] = true;
			}
		}
	}
	for(int i = 2; i <= maxn; i++){
		if(!sosu[i]){
			long long prev = i;
			for(long long j = (long long)i*i; j <= kk; j*=i){
				if((j / i) == prev) almostsosu.push_back(j);
				prev = j;
			}
		}
	}
}

int main(){
	init();
	sort(almostsosu.begin(), almostsosu.end());
	unsigned long long n, m;
	scanf("%llu%llu", &n, &m);
//	printf("%d\n", almostsosu.size());
	//printf("%llu\n", almostsosu[almostsosu.size()-1]);
//	for(int i = 0; i < 27; i++) printf("%lld ", almostsosu[i]);
	int l = lower_bound(almostsosu.begin(), almostsosu.end(), n) - almostsosu.begin();
	int r = lower_bound(almostsosu.begin(), almostsosu.end(), m) - almostsosu.begin();
	if(almostsosu[r] == m) r++;
//	printf("\n%d %d\n", l, r);
//	printf("%d %d\n", almostsosu[l], almostsosu[r]);
	printf("%d\n", r-l);
}