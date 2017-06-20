#include<cstdio>

int main(){
	int w;
	scanf("%d", &w);
	if(w > 2 && !(w&1)) puts("YES");
	else puts("NO");
}