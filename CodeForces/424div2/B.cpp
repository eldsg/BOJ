#include <bits/stdc++.h>

using namespace std;

map<char, char> h;

int main(){
	string s, v, ret;
	cin >> s >> v >> ret;
	for(int i = 0; i < 26; i++){
		h[s[i]] = v[i];
		h[s[i]-'a'+'A'] = v[i]-'a'+'A';
	}
	int size = ret.size();
	for(int i = 0; i < size; i++){
		if(ret[i] >= 'a' && ret[i] <= 'z'){
			printf("%c", h[ret[i]]);
		}
		else if(ret[i] >= 'A' && ret[i] <= 'Z'){
			printf("%c", h[ret[i]]);
		}
		else printf("%c", ret[i]);
	}
	puts("");
}