#include<cstdio>
#include<cstdlib>
#include<cmath>
int main(){
	int tc;
	scanf("%d", &tc);
	while(tc--){
		int num, b=0, b2=0, w=0, w2=0, diffpos=0, ret=0;
		char str[100001];
		char str2[100001];
		scanf("%d %s %s", &num, str, str2);
		for(int i = 0; i < num; i++){
			if(str[i] != str2[i]) diffpos++;
			if(str[i] == 'B') b++;
			if(str2[i] == 'B') b2++;
		}
		int diff = abs(b2-b);
		ret+= diff;
		ret+= (diffpos-diff)/2;
		printf("%d\n", ret);
	}
}
