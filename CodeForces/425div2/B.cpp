#include <bits/stdc++.h>

using namespace std;

char alph[32];
char pat[100025];
char compt[100025];
int good[32];
int tc, patlen;
int main(){
	scanf("%s %s ", alph, pat);
	patlen = strlen(pat);
	for(int i = 0; alph[i]; i++){
		good[alph[i]-'a'] = 1;
	}
	scanf("%d", &tc);
	while(tc--){
		int i, j;
		bool chk = false;
		bool chk2 = false;
		scanf(" %s", compt);
		int len = strlen(compt);
		for(i = 0, j = 0; compt[j]; i++, j++){
			//printf("%d %d\n", j, i);
			if(compt[j] != pat[i]){
				if(pat[i] != '?' && pat[i] != '*'){
					chk = true;
					break;
				}
				else if(pat[i] == '?'){
					if(good[compt[j]-'a'] == 0){
						chk = true;
						break;
					}
				}
				else if(pat[i] == '*'){
					if(compt[j] == pat[i+1]){
						i++;
					}
					else if(good[compt[j]-'a'] == 1){
						while(good[compt[j]-'a'] == 0 && (len-j) != (patlen-i)){
							//printf("%d %d\n", j, i);
							//printf("%d %d\n", len-j-1, patlen-i-1);
							if(compt[j] == 0) break;
							j++;
						}
					}					
				}
			}	
		}
		if(chk)	puts("NO");
		else {
			if(i != patlen) puts("NO");
			else puts("YES");
		}
	}
}