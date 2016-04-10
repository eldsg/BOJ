#include<iostream>
#include<memory.h>
#include<stdio.h>
#include<math.h>
using namespace std;
const long long int maxn = 1000001;
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
int main(){
	int M, N;
	getPrime();
	cin >> M >> N;
	for (int i = 0; i <= 1000000; i++){
		if (prime[i] >= M && prime[i] <= N){
			printf("%d\n", prime[i]);
		}
	}
}