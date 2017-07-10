#include <bits/stdc++.h>

int a[1001];
int b[1001];
bool chk[1001];
int ret[1001];
int cnt[1001];
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", a+i);
		cnt[a[i]]++;
	}
	for(int i = 0; i < n; i++){
	 	scanf("%d", b+i);
	 	cnt[b[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(a[i] == b[i]){
			ret[i] = a[i];	
			chk[a[i]] = true;
			cnt[a[i]] = 0;
		} 
	}
	for(int i = 0; i < n; i++){
		if(ret[i]) printf("%d ", ret[i]);
		else{
			if(!chk[a[i]] && !chk[b[i]]){
				if(cnt[a[i]] > cnt[b[i]]){
					printf("%d ", b[i]);
					chk[b[i]] = true;
					cnt[b[i]]--;
				}
				else{
					printf("%d ", a[i]);
					chk[a[i]] = true;
					cnt[a[i]]--;
				}
			}
			else if(!chk[a[i]]){
				printf("%d ", a[i]);
				chk[a[i]] = true;
				cnt[a[i]] = 0;
			}
			else if(!chk[b[i]]){
				printf("%d ", b[i]);
				chk[b[i]] = true;
				cnt[b[i]] = 0;
			}
			else{
				for(int i = 1; i <= n; i++){
					if(!chk[i]){
						printf("%d ", i);
						chk[i] = true;
						break;
					}
				}
			}
		}
	}
}