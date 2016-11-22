#include<cstdio>

int num[100001];
long long sum[100001];
unsigned long long ret =0;
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		scanf("%d", num+i);
		sum[i] = num[i]+sum[i-1];
	}
	for(int i = 0; i < n; i++){
		ret += (sum[n-1] - sum[i])*num[i];
	}
	printf("%llu\n", ret);
}
