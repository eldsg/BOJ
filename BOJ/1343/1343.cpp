#include <bits/stdc++.h>

using namespace std;

vector<char> ret;

int main(){
	char c;
	int cnt = 0;
	while(scanf("%c", &c) != EOF){
		if(c == 'X') cnt++;
		if(c == '.'){
			if(cnt&1) {
				puts("-1");
				return 0;
			}
			else{
				int k = cnt/4;
				cnt%=4;
				for(int i = 0; i < 4*k; i++) ret.push_back('A');
				k = cnt/2;
				for(int i = 0; i < 2*k; i++) ret.push_back('B');
				cnt = 0;
			}
			ret.push_back('.');
		}
	}
	if(cnt&1){
		puts("-1");
		return 0;
	}
	else{
		int k = cnt/4;
		cnt%=4;
		for(int i = 0; i < 4*k; i++) ret.push_back('A');
		k = cnt/2;
		for(int i = 0; i < 2*k; i++) ret.push_back('B');
	}
	int s = ret.size();
	for(int i = 0; i < s; i++) printf("%c", ret[i]);
	puts("");
}