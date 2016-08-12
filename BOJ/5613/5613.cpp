#include<cstdio>
#include<cstdlib>

int main(){
	int a,c;
	char b;
	scanf("%d\n", &a);
	int ret = a;
	while(1){
		scanf("%c\n", &b);
		if(b == '=') break;
		scanf("%d\n", &c);
		if(b == '+') ret+=c;
		else if(b == '-') ret-=c;
		else if(b == '/') ret/=c;
		else if(b == '*') ret*=c;
	}
	printf("%d\n", ret);
}
