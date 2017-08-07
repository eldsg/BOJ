#include <bits/stdc++.h>

using namespace std;

multiset<int> ms;
int tc, n, a;
char c;
int main(){
	scanf("%d", &tc);
	while(tc--){
		ms.clear();
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf(" %c %d", &c, &a);
			if(c == 'I'){
				ms.insert(a);
			}
			else if(!ms.empty()){
				if(a == 1){
					ms.erase(--ms.end());
				}
				else{
					ms.erase(ms.begin());
				}
			}
		}
		if(ms.empty()) puts("EMPTY");
		else {
			printf("%d %d\n", *ms.rbegin(), *ms.begin());
		}
	}
}