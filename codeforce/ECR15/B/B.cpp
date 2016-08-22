#include<cstdio>
#include<map>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

long long numb[100001];
map<long long, long long> che;

int main(){
	long long num, ret = 0;
	scanf("%I64d", &num);
	for(int i = 0; i<num; i++) {
		scanf("%I64d", numb+i);
		che[numb[i]]++;
	}
	for(int i = 0; i<num; i++){
			che[numb[i]]--;
		for(int j = 1; j<=31; j++){
			long long p = 1 << j;
			long long k = p-numb[i];
			if(che[k]) ret += che[k];
		}
	}
	printf("%I64d\n", ret);
}
