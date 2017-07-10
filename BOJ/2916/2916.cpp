#include <bits/stdc++.h>

using namespace std;
map<int, bool> ret;
int num[11];
int possible[721];
int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++){
		scanf("%d", num+i);
		possible[num[i]] = 1;
	}
	possible[0] = 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 360; j++){
			if(!possible[j]) continue;
			for(int k = 1; k <= 360; k++){
				possible[(j+k*num[i])%360] = 1;
				possible[(360*360+j-k*num[i])%360] = 1;
			}	
		}
	}
	for(int i = 0; i < k; i++){
		scanf("%d", &n);
		if(possible[n]) puts("YES");
		else puts("NO");
	}
	//for(int i = 0; i <= 360; i++) if(possible[i]) printf("%d ", i);
}