#include<cstdio>
#include<cstring>

int main(){
	int t;
	int s = 0;
	scanf("%d", &t);
	while(t--){
		char str[10];
		int n;
		scanf("%s", str);
		if(str[0] == 'a' && str[1] == 'd'){
			scanf("%d", &n);
			s |= 1 << n-1;
		}
		else if(str[0] == 'r'){
			scanf("%d", &n);
			s &= ~(1 << n-1);
		}
		else if(str[0] == 'c'){
			scanf("%d", &n);
			if(s & (1 << n-1)){
				printf("1\n");
			}
			else printf("0\n");
		}
		else if(str[0] == 't'){
			scanf("%d", &n);
			s ^= 1 << n-1;
		}
		else if(str[0] == 'a') s = (1 << 20)-1;
		else s = 0;
	}
}
