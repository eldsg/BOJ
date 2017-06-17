#include<cstdio>

int min(int a, int b){
	return a < b ? a : b;
}

int main(){
	int a, b, c, t = 0;
	scanf("%d%d%d", &a,&b,&c);
	int total = a+b-c;
	int mt = min(a/2, b);
	while(mt){
		if(3*mt <= total) break;
		mt--;
	}
	printf("%d\n", mt);
}
