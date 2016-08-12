#include<cstdio>
#include<cstdlib>
#include<cstring>

int num[101];

int gcd(int u, int v){
	if(v==0) return u;
	else return gcd(v, u%v);
}


int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		int n, ret = 0;
		memset(num, 0, sizeof(num));
		scanf("%d", &n);
		for(int i = 0; i < n; i++) scanf("%d", &num[i]);
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				ret += gcd(num[i], num[j]);
			}
		}
		printf("%d\n", ret);
	}
}
