#include<cstdio>
#include<cstring>

int t, a, b, ret[1024];

int main(){
	scanf("%d", &t);
	while(t--){
		int result = 1;
		memset(ret, 0, sizeof(ret));
		scanf("%d %d", &a, &b);
		while(a!=1){
			ret[a]++;
			a/=2;
		}
		while(b!=1){
			ret[b]++;
			b/=2;
		}
		for(int i = 1; i < 1024; i++){
			if(ret[i] == 2 && i>result) result = i;
		}
		printf("%d\n", result*10);
	}
}
