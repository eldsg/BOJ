#include<cstdio>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a;
		double b;
		int ret = 0;
		double ret2 = 0;
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%d %lf", &a, &b);
			ret += a, ret2 += a*b;
		}
		printf("%d %.1lf\n", ret, ret2/(double)ret);
	}
}
