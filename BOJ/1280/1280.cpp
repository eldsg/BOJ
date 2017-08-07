#include <bits/stdc++.h>

const long long mod = 1000000007;

using namespace std;
long long tree[222222];
long long pos[222222];
long long cnt[222222];
long long sum(long long *t, int index){
    long long ans = 0;
    while(index > 0){
        ans += t[index];
        index -= (index & -index);
    }
    return ans;
}

void update(long long *t, int index, int num){
    while(index <= 222222){
        t[index] += num;
        index += (index & -index);
    }
}

int n;
long long ret = 1;
int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &pos[i]);
		pos[i] += 1;
	}
	for(int i = 1; i <= n; i++){
		update(cnt, pos[i], 1);
		update(tree, pos[i], pos[i]);
	//	printf("%lld %lld ", sum(cnt, pos[i]-1) * pos[i], sum(tree, pos[i]-1)); // 왼쪽에 심어진 개수 * pos[i] , 왼쪽의 나무 누적합
	//	printf("%lld %lld\n", (sum(cnt, 222222) - sum(cnt, pos[i])) * pos[i]  , sum(tree, 222222) - sum(tree, pos[i]));

		long long k = sum(cnt, pos[i]-1) * pos[i];
		long long k2 = sum(tree, pos[i]-1);
		long long k3 = (sum(cnt, 222222) - sum(cnt, pos[i])) * pos[i];
		long long k4 = sum(tree, 222222) - sum(tree, pos[i]);
		if(i==1 && k-k2-k3+k4 == 0) continue;
		ret = ((ret % mod) * ((k-k2-k3+k4) % mod)) % mod;
	}
	printf("%lld\n", ret);
}