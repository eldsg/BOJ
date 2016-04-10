#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int cnt = 0, p_num =0,N;
int prime[500001];
int d[500001];
bool flag[500001];
void proc(){
	int i;
	for (i = 1; i <= N; i++){
		if (N%i == 0){
			d[cnt++] = i;
		}
	}
}
void getPrime()
{
	int i, j;
	int m = sqrt(N);
	memset(flag, false, sizeof(flag));
	for (i = 2; i <= m; i++)
	{
		if (flag[i] == false)
		{
			for (j = i + i; j <= N; j += i)
				flag[j] = true;
		}
	}
	for (i = 2; i <= N; i++){
		if (flag[i] == false) prime[p_num++] = i;
	}
}

int main(){
	int a, i,j, count=0,count1=0,k;
	long long sum = 0;
	cin >> N;
	a = N;
	for (i = a; a > 2; a -= 2){
		sum += a - 2;
	}
	getPrime();
	proc();
	for (i = 0; i < p_num; i++){
		for (j = i + 1; j < p_num; j++){
			if (prime[i] + prime[j] > prime[p_num-1]) break;
			if (flag[prime[i] + prime[j]] == false){
				count++;
			}
		}
	}
    if(N==2 || flag[N] == true){
        for (i = 0; i < cnt; i++){
		for (j = i; j < cnt; j++){
			if (N % (d[i] + d[j]) == 0){
				count1++;
			}
		}
	}
    }
	cout << sum << endl;
	cout << count1 << endl;
	cout << count << endl;
}
