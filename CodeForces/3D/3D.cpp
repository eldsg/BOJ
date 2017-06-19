#include<cstdio>
#include<string>
#include<iostream>
#include<queue>

using namespace std;

priority_queue<pair<long long, long long> > chk;

int main(){
	string s;
	cin >> s;
	int size = s.size();
	int bc = 0;
	long long ret = 0;
	for(int i = 0; i < size; i++){
		if(s[i] == '(') bc++;
		else if(s[i] == ')') bc--;
		else{
			int a, b;
			scanf("%d%d", &a, &b);
			ret += b;
			s[i] = ')';
			bc--;
			chk.push(make_pair(b-a, i));
		}
		while(bc < 0){
			if(chk.empty()) break;
			pair<long long, long long> temp = chk.top();
			chk.pop();
			ret -= temp.first;
			s[temp.second] = '(';
			bc+=2;
		}
		if(bc < 0) break;
	}
	if(bc) puts("-1");
	else{
		printf("%d\n", ret);
		cout << s << endl;
	}
}
