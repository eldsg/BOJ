#include<cstdio>
#include<cstdlib>
#include<cmath>

int main(){
	int num, cnt[32];
	int rret = 0;
	char ma[20];
	scanf("%d\n", &num);
	scanf("%s", ma);
	for(int i = 0; i < 26; i++) cnt[i] = 0;
	for(int i = 0; ma[i]; i++) cnt[ma[i]-'A']++;
	for(int i = 0; i < num-1; i++){
		char comp[20];
		int cntcomp[32];
		for(int j = 0; j < 26; j++) cntcomp[j] = 0;
		scanf("%s", comp);
		int ret = 0;
		bool check = false;
		int p = 0, q = 0, s = 0;
		for(int j = 0; comp[j]; j++) cntcomp[comp[j]-'A']++;
		for(int j = 0; j < 26; j++){
			if(cnt[j]-cntcomp[j]==1) p++;
			if(cnt[j]-cntcomp[j]==-1) q++;
			s += abs(cnt[j]-cntcomp[j]);
		}
		if(p > 1 || q > 1) continue;
		if(s==2 && p==1 && q==1) rret++;
		else if(s<2) rret++;
	}
	printf("%d\n", rret);
}
