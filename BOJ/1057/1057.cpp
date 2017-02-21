#include<cstdio>

int main(){
	int a, b, c, ret=0;
	scanf("%d %d %d", &a, &b, &c);
	while(1){
		ret++;
		if(b%2==1){
			if(c%2==1){
				b = b/2+1;
				c = c/2+1;
			}
			else{
				if(c-b==1) break;
				else{
					c/=2;
					b = b/2+1;
				}
			}
		}
		else{
			if(c%2==0){
				b/=2;
				c/=2;
			}
			else{
				if(b-c==1) break;
				else{
					b/=2;
					c = c/2+1;
				}
			}
		}
	}
	printf("%d\n",ret);
}
