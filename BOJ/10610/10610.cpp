#include <bits/stdc++.h>

using namespace std;

char str[100001];
int cnt[10];
int three = 0;
int main(){
	scanf("%s", str);
	for(int i = 0; str[i]; i++){
		three += str[i]-'0';
		cnt[str[i]-'0']++;
	}
	if(cnt[0] == 0 || three % 3 != 0){
		puts("-1");
		return 0;
	}
	else{
		for(int i = 9; i >= 0; i--){
			for(int k = 0; k < cnt[i]; k++){
				printf("%d", i);
			}
		}
	}
}