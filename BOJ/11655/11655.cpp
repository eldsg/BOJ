#include <bits/stdc++.h>

using namespace std;

#define fastio() ios::sync_with_stdio(0), cin.tie(0);

string s;

int main(){
	fastio();
	getline(cin, s);
	for(int i = 0; s[i]; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			cout << (char)(((s[i]-'A'+13) % 26) + 'A');
		}
		else if(s[i] >= 'a' && s[i] <= 'z'){
			cout << (char)(((s[i]-'a'+13) % 26) + 'a');
		}
		else cout << s[i];
	}
	cout << endl;
}