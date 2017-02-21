#include<cstdio>

int main(){
	int a, b, c, ret = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(b < a && c < a){
		printf("-1\n");
	}
	else{
		int t = b/a;
		int t1 = c/a;
		if(!t){
			int tt = c%a;
			if(tt==0){
				printf("%d\n", t1);
			}
			else printf("-1\n");
		}
		else if(!t1){
			int tt = b%a;
			if(tt==0){
				printf("%d\n", t);
			}
			else printf("-1\n");
		}
		else {
			printf("%d\n", t+t1);
		}
		
	}
}
