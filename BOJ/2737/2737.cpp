#include <bits/stdc++.h>

using namespace std;

int tc;

int main(){
	scanf("%d", &tc);
	while(tc--){
		int limit, ret = 0;
		scanf("%d", &limit);
		for(int i = 2; (i*(i+1))/2 <= limit; i++){
			if(i%2==1){
				if(limit % i == 0) ret++;
			}
			else{
				if(limit % i == i/2) ret++;
			}
		}
		printf("%d\n", ret);
	}
}