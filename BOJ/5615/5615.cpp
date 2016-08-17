#include<cstdio>

#define maxnum 2147483647

int main(){
	int testcase, ret = 0;
	scanf("%d", &testcase);
	for(int i = 0; i<testcase; i++){
		long long num, x=1;
		scanf("%lld", &num);
		while(2*(x*x+x) <= maxnum){
			if(num-x < 2*x+1) break;
			if(((num-x) % (2*x+1)) ==0){
				ret++;
				break;
			}
			x++;
		}
	}
	printf("%d\n", testcase-ret);
}
