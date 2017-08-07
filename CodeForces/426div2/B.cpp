#include <bits/stdc++.h>

using namespace std;

int ret[1000001];
char str[1000001];
int lastpos[27];
int firstpos[27];
bool chk[27];
int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	scanf(" %s", str);
	
	memset(lastpos, -1, sizeof(lastpos));
	memset(firstpos, -1, sizeof(firstpos));
	for(int i = 0; str[i]; i++){
		lastpos[str[i]-'A'] = i;
		if(!chk[str[i]-'A']){
			firstpos[str[i]-'A'] = i;
			chk[str[i]-'A'] = true;
		}
	}
	for(int i = 0; i < 27; i++){
		if(firstpos[i] == -1 || lastpos[i] == -1) continue;
		for(int j = firstpos[i]; j <= lastpos[i]; j++){
			ret[j]++;
		}
	}
	sort(ret, ret+1000001);
	if(ret[1000000] > k) puts("YES");
	else puts("NO");
	//printf("%d", ret[25]);
}