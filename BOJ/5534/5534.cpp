#include <bits/stdc++.h>

int main(){
	int t, ret = 0;
	char s[26], temp[101];
	scanf("%d %s", &t, s);
	int slen = strlen(s);
	for(int i = 0; i < t; i++){
		scanf("%s", temp);
		int tlen = strlen(temp);
		bool chk = false;
		for(int k = 0; k < tlen; k++){
			for(int l = 1; k+(slen-1)*l < tlen; l++){
				chk = false;
				for(int j = 0; j < slen; j++){
					if(temp[k+j*l] != s[j]){
						chk = true;
						break;
					}
				}
				if(!chk){
					ret++;
					break;
				}
			}
			if(!chk) break;
		}
	}
	printf("%d\n", ret);
}