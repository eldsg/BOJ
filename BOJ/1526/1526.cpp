#include<stdio.h>
#include<string.h>

bool check(int n){
	char buf[16];
	sprintf(buf, "%d", n);
	for(int i = 0; buf[i]; i++){
		if(buf[i] != '4' && buf[i] != '7') return false;
	}
	return true;
}

int main(){
	int a;
	scanf("%d", &a);
	for(int i = a; i >= 4; i--){
		if(check(i)){
			printf("%d", i);
			break;
		}
	}

}
