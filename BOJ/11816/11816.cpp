#include<cstdlib>
#include<cstdio>

int main(){
	char str[10001];
	int ret;
	scanf("%s", str);
	if(str[0] == '0' && str[1] == 'x') ret = strtol(str, NULL, 16);
	else if(str[0] == '0') ret = strtol(str, NULL, 8);
	else ret = strtol(str, NULL, 10);
	printf("%d\n", ret);
}
