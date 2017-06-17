#include<cstdio>

int main(){
	int num, n[1000001], a, b;
	scanf("%d", &num);
	for(int i = 0; i < num; i++) scanf("%d", n+i);
	scanf("%d%d", &a, &b);
	long long ret = 0;
	for(int i = 0; i < num; i++){
		n[i]-=a;
		ret++;
		if(n[i] > 0 && n[i]%b == 0) ret+=n[i]/b;
		else if(n[i] > 0 && n[i]%b != 0) ret+=n[i]/b+1;
	}
	printf("%lld\n", ret);
}
