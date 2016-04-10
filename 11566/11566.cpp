#include<stdio.h>

int main(){
	int i, k,t,j, n, dn[1001], m, dm[1001], mind = 1001, maxd = -1;
	scanf("%d", &n);
	for(i = 0; i<n; i++) scanf("%d", &dn[i]);
	scanf("%d", &m);
	for(i = 0; i<m; i++) scanf("%d", &dm[i]);
	for(i = 0; i<m; i++){
		if(dm[i] == dn[0]){
			k = i;
			for(t = 1; n+(t-1)*(n-1) <= (m-k); t++){
			bool c =0;
				for(j = 1; j<n; j++){
					if(dm[k+j*t] != dn[j]){
						c =1;
						break;
					}
				}
				if(!c){
					if(t > maxd) maxd = t;
					if(t < mind) mind = t;
				}
			}
		}
	}
	if(maxd == -1) printf("-1");
	else printf("%d %d", mind-1, maxd-1);
}
