#include <bits/stdc++.h>
/* 테스트케이스가 한번에 여러개 들어오는 것은 초기화를 해야한다 */
using namespace std;

char chk2[6] = { '(', ')', '{', '}', '[', ']', };

int main(){
	string s;
	while(1){
		stack<char> ret;
		getline(cin, s);
		if(s.size() == 1 && s[0] == '#') break;
		//cout << s << endl;
		bool chk = false;
		for(int i = 0; i < s.size(); i++){
			bool chk3 = false;
			for(int j = 0; j < 6; j++){
				if(s[i] == chk2[j]){
					chk3 = true;
					break;
				}
			}
			if(chk3){
				if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
					ret.push(s[i]);
				}
				else if(!ret.empty()){
					if(s[i] == ')' && ret.top() == '(') ret.pop();
					else if(s[i] == '}' && ret.top() == '{') ret.pop();
					else if(s[i] == ']' && ret.top() == '[') ret.pop();
					else {
						chk = true;
						break;
					}
				}
				else{
						chk = true;
						break;
				}
			}
		}
		if(!ret.empty()) chk = true;
		while(!ret.empty()){
			ret.pop();
		}
		if(chk) puts("Illegal");
		else puts("Legal");
	}

}