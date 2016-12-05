#include<cstdio>
#include<cstdlib>
#include<cstring>

int main(){
	int a, b;
	char str[5];
	scanf("%d %d", &a, &b);
	sprintf(str, "%d", a);
	if(strlen(str)*a > b){
		for(int i = 0; i<b; i++){
			printf("%c", str[i%strlen(str)]);
		}
	}
	else{
		for(int i = 0; i<a; i++){
			printf("%d", a);
		}
	}
	printf("\n");
	
}
