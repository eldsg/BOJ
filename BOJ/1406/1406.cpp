#include <bits/stdc++.h>

using namespace std;

list<char> ret;

int main(){
	char str[200001];
	int t;
	scanf("%s", str);
	for(int i = 0; str[i]; i++) ret.push_back(str[i]);
	scanf("%d", &t);
	auto it = ret.end();
	while(t--){
		char a, b;
		scanf(" %c", &a);
		if(a == 'P'){
			scanf(" %c", &b);
			ret.insert(it, b);
			//printf("%c\n", *it);
		}
		else if(a == 'L' && it!= ret.begin()) it--;
		else if(a == 'B' && it!= ret.begin()) it = ret.erase(--it);
		else if(a == 'D' && it!= ret.end()) it++;
	}
	for (auto it : ret) putchar(it);
	puts("");
}