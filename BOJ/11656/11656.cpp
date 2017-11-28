#include <bits/stdc++.h>

using namespace std;

#define fastio() ios::sync_with_stdio(0), cin.tie(0);

string s;

vector<string> ret;

int main(){
	cin >> s;
	int size = s.size();
	for(int i = 0; i < size; i++){
		ret.push_back(s.substr(i, size));
	}
	sort(ret.begin(), ret.end());
	for(int i = 0; i < size; i++){
		cout << ret[i] << endl;
	}
}