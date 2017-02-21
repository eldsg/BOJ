#include<cstdio>
#include<map>
#include<vector>

using namespace std;

int main(){
	int a, b, c, e;
	while(1){
		scanf("%d %d", &a, &b);
		if(a==0 && b==0) break;
		unsigned long long ret = 1;
		unsigned long long d1 = 1;
		unsigned long long t3;
		if(a-b < b) t3 = a-b;
		else t3 = b;
		while(t3){
			t3--;
			ret *= a--;
			ret /= d1++;
		}
		printf("%lld\n", ret);
	}
}
