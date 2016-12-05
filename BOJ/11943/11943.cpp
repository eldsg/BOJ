#include<cstdio>

int main(){
	int a1, o1, a2, o2;
	scanf("%d %d %d %d", &a1, &o1, &a2, &o2);
	printf("%d\n", a1+o2 < o1+a2 ? a1+o2 : o1+a2);
}
