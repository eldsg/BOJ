#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>
#include<string>
#include<cstring>

using namespace std;

#define ll long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back

int main(){
	long long c, v0, v1, a, l, cnt = 0;
	scanf("%lld%lld%lld%lld%lld", &c, &v0, &v1, &a, &l);
	while(1){
		cnt++;
		if(cnt == 1) c -= v0;
		else{
			v0+=a;
			if(v0 >= v1) c-=v1;
			else c-=v0;
		}
		if(c <= 0) break;
		c+=l;
	}
	printf("%lld\n", cnt);
}
