#include<cstring>
#include<cstdio>
#include<cstdlib>

char ch[101];
int size;

bool check(){
	for(int i = 0; i<size/2; i++){
		if(ch[i] != ch[size-1-i]) return 0;
	}
	return 1;
}

int main(){
	scanf("%s", ch);
	size = strlen(ch);
	printf("%d\n", check());
}
