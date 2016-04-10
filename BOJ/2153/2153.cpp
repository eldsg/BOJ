#include<iostream>
#include<memory.h>
#include<stdio.h>
#include<math.h>
using namespace std;
const long long int maxn = 2000;
int cnt[maxn];
bool flag[maxn];
long long int prime[maxn];
int p_num;
void getPrime()
{
    prime[0] = 1;
	int m = sqrt(maxn);
	memset(flag, false, sizeof(flag));
	p_num = 1;
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
	getPrime();
    bool check = false;
    int count = 0;
	char a[21];
    cin >> a;
    for(int i = 0; i<strlen(a); i++){
        if(a[i] >='A' && a[i] <= 'Z'){
            a[i] -= 38;
        }
        else a[i] -= 96;
        count += a[i];
    }
    for(int i = 0; i<=maxn; i++){
        if(count == prime[i]) check = true;            
    }
    if(check) cout << "It is a prime word." << endl;
    else cout << "It is not a prime word." << endl;
}