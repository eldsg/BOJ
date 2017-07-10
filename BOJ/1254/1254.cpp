#include <bits/stdc++.h>

char str[1001];

bool chk(int s, int e){
	for(int i = s, j = e; i <= (s+e)/2; i++, j--){
		if(str[i] != str[j]) return false;
	}
	return true;
}

int main(){
	scanf("%s", str);
	int len = strlen(str);
	int ret = len;
	for(int i = 0; str[i]; i++){
		if(chk(i, len-1)){
			ret = i;
			break;
		}
	}
	printf("%d\n", ret+len);
}