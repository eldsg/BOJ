#include<cstdio>

int gcd(int a, int b){
	return b ? gcd(b, a%b) : a;
}
int main(){
	int a, b;
	scanf("%d%d", &a,&b);
	int g = gcd(a, b);
	int l = a/g;
	int r = b/g;
	printf("%d\n", a*(r-1)/l);
}
