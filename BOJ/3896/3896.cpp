#include<iostream>
#include<memory.h>
#include<stdio.h>
#include<math.h>
using namespace std;
const long long int maxn = 1500000;
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
	int M, N, count = 0;
	getPrime();
	cin >> M;
	while (M--){
		int temp;
		cin >> N;
		for (int i = 0; i <= maxn; i++){
			if (N == prime[i]){
				printf("0\n");
				break;
			}
			if (prime[i] > N){
				printf("%d\n", prime[i] - prime[i - 1]);
				break;
			}
		}
	}
}