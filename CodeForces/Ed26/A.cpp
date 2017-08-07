#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; string s;
	int ret = 0, capital = 0;
	scanf("%d ", &n);
	getline(cin, s);
	for(int i = 0; s[i]; i++){
		if(s[i] >= 'A' && s[i] <= 'Z') capital++;
		if(s[i] == ' '){
			ret = max(ret, capital);
			capital = 0;
		}
	}
	ret = max(ret, capital);
	printf("%d\n", ret);
}