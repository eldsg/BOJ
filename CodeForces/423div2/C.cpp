#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e6+1;
int n, k, index, maxnum = -1;
char ret[MAXN+111];
int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		char temp[MAXN+111];
		scanf("%s %d", temp, &k);
		int tlen = strlen(temp);
		int max2 = -1;
		for(int j = 0; j < k; j++){
			scanf("%d", &index);
			for(int kk = max(index, max2); kk < index+tlen; kk++){
				ret[kk] = temp[kk-index];
				maxnum = max(maxnum, kk);
				max2 = max(max2, kk);
			}
		}
	}
	for(int i = 0; i <= maxnum; i++){
		if(ret[i] < 'a' || ret[i] > 'z') ret[i] = 'a';
	}
	for(int i = 1; i <= maxnum; i++) printf("%c", ret[i]);
	puts("");
}