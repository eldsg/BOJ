#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(1){
		getline(cin, s);
		int ss = s.size();
		if(ss==3 && s[0] == s[1] && s[0] == s[2] && s[0] == '*') break;
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
}