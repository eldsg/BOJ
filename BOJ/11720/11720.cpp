#include<cstdio>
#include<cstring>

int main(){
	char str[101];
	int ret = 0, a;
	scanf("%d\n", &a);
	scanf("%s", str);
	int size = strlen(str);
	for(int i = 0; i < size; i++) ret += str[i] -'0';
	printf("%d\n", ret);
}
