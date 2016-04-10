#include<stdio.h>
#include<math.h>
unsigned long long a,b;
int main(){
	scanf("%llu", &a);
	b =(unsigned long long)sqrt(a);
	if(b*b >= a) printf("%llu\n", b);
	else printf("%llu\n",b+1);
}
