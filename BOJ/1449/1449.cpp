#include <bits/stdc++.h>

using namespace std;

int num[1001];
bool mapp[1024];
int main(){
	int n, l, cnt = 0;
	scanf("%d%d", &n, &l);
	for(int i = 0; i < n; i++) scanf("%d", num+i), mapp[num[i]] = true;
	for(int i = 0; i <= 1000; i++){
		if(mapp[i]){
			cnt++;
			for(int j = 0; j < l && i+j < 1001; j++){
				mapp[i+j] = false;
			}
		}
	}
	printf("%d\n", cnt);

}