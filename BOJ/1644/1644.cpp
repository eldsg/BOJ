#include <bits/stdc++.h>

using namespace std;

const int MAXN = 4000001;
bool prime[MAXN] = {true, false, };
vector<int> pnum;
int dp[MAXN+1];
void init(){
	memset(prime, true, sizeof(prime));
	for(int i = 2; (i*i) <= MAXN; i++){
		if(prime[i]){
			for(int j = i*i; j <= MAXN; j+=i) prime[j] = false;
		}
	}
	for(int i = 2; i <= MAXN; i++){
		if(prime[i]) pnum.push_back(i);
	}

}

int main(){
	int n;
	scanf("%d", &n);
	init();
	int size = pnum.size();
	dp[0] = dp[1] = 0;
	for(int i = 0; i < size; i++){
		int k = pnum[i];
		for(int j = i+1; j < size; j++){
			dp[k]++;
			k += pnum[j];
			if(k >= MAXN) break;
		}
	}
	printf("%d\n", dp[n]);
}