#include<cstdio>
#include<cstring>
#include<cstdlib>

char str[100001];
int main(){
	scanf("%s", str);
	int len = strlen(str);
	int pos, lastpos;
	bool check = false;
	for(int i = 0; i<len; i++){
		if(str[i] != 'a' && !check){
			check = true;
			pos = i;
		}
		if(check && str[i] == 'a'){
			lastpos = i-1;
			break;
		}
	}
	for(int i = 0; i<len; i++){
		if(i >= pos && i<=lastpos) printf("%c", str[i]-1);
		else printf("%c", str[i]);
	}
	printf("\n");
}
