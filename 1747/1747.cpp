#include<stdio.h>
#include<math.h>
#include<memory.h>
const long long int maxn = 2000000;
int cnt[maxn];
bool flag[maxn];
int prime[maxn];
int p_num;

void getPrime()
{
	int m = sqrt(maxn);
	memset(flag, false, sizeof(flag));
	p_num = 0;
	for(int i = 2; i <=m; i++){
		if(!flag[i]){
			for(int j = i+i; j<=maxn; j+=i){
				flag[j] = true;
			}
		}
	}
	for(int i = 2; i < maxn; i++){
		if(!flag[i]) prime[p_num++] = i;
	}
}

int main(){
	char temp[100];
	getPrime();
	int count;
	int co;
	bool check = false;
	scanf("%d", &count);
	for(co = 0; prime[co] < count; co++);
	while(1){
		check = false;
		sprintf(temp, "%d", prime[co]);
		int size = strlen(temp);
			for(int i = 0; i < size/2; i++){
				if(temp[i] != temp[size-i-1]){
					check = true;
					break;
				}
			}
		if(!check) break;
		co++;
	}
	printf("%d\n", prime[co]);
}
