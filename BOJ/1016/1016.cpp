#include <stdio.h>
#include <iostream>
#include <map>
#include <set>
#include <bitset>
#include <list>
#include <stack>
#include <vector>
#include <math.h>
#include <string.h>
#include <queue>
#include <string>
#include <stdlib.h>
#include <algorithm>
//#define LL __int64
//#define LL long long
#define eps 1e-9
#define PI acos(-1.0)
typedef long long LL;
using namespace std;

const long long int maxn = 10000010;
int cnt[maxn];
bool flag[maxn];
long long int prime[maxn];
int p_num;

void getPrime()
{
	int m = sqrt(maxn);
	memset(flag, false, sizeof(flag));
	p_num = 0;
	for (int i = 2; i <= m; i++)
	{
		if (flag[i] == false)
		{
			for (int j = i + i; j <= maxn; j += i)
				flag[j] = true;
		}
	}
	for (int i = 2; i < maxn; i++)
	if (flag[i] == false)
		prime[p_num++] = i;
}


void dfs(int st, LL s, int num)
{
	cnt[s] = num & 1 ? 1 : -1;
	for (int i = st; i < p_num; i++)
	{
		LL tmp = prime[i] * s;
		if (tmp > maxn)
			break;
		dfs(i + 1, tmp, num + 1);
	}
}

int main()
{
	bool q = true;
	int test;
	memset(cnt, 0, sizeof(cnt));
	getPrime();
	dfs(0, 1LL, 0);

	LL n, k;
	scanf("%lld%lld", &n, &k);
	int m = sqrt(n + 0.5);
	int t = sqrt(k + 0.5);
	LL ans = 0, ans1 = 0;
	for (int i = 0; i <= 1001000; i++){
		if (n < prime[i] * prime[i]) break;
		if (n % (prime[i] * prime[i]) == 0){
			q = false;
			break;
		}
	}
	for (int i = 2; i <= m; i++)
	{
		if (cnt[i])
		{
			ans += cnt[i] * n / ((LL)i*i);
		}
	}
	for (int i = 2; i <= t; i++)
	{
		if (cnt[i])
		{
			ans1 += cnt[i] * k / ((LL)i*i);
		}
	}
	ans = n - ans;
	ans1 = k - ans1;
	if (q == true) printf("%lld", ans1 - ans + 1);
	else printf("%lld", ans1 - ans);
}
