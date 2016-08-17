#include<cstdio>
#include<cstring>

int main(){
	char str[101];
	scanf("%s", str);
	int size = strlen(str);
	for(int i = 0; i<size; i++){
		printf("%c", str[i]);
		if(i%10 == 9) printf("\n");
	}
	printf("\n");
}
