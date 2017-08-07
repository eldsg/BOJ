#include <bits/stdc++.h>

using namespace std;
map<string, int> chk2;
map<string, set<string> >chk; // man -> project
bool comp(pair<string, int> a, pair<string, int> b){
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}
int main(){
	string nowp;
	vector< pair<string, int> > ret;
	while(1){
		string s;
		getline(cin, s);
		if(s[0] >= 'A' && s[0] <= 'Z'){
			nowp = s;
			chk2[nowp] = 0;
		} // project name
		else if(s.size() == 1 && s[0] == '0'){
			break;
		} // end case
		else if(s.size() == 1 && s[0] == '1'){
			for(auto i : chk){
				if(i.second.size() > 1) continue;
				else{
					chk2[*(i.second.begin())]++;
				}
			}
			for(auto i : chk2){
				ret.push_back({i.first, i.second});
			}
			sort(ret.begin(), ret.end(), comp);
			for(auto i : ret){
				cout << i.first << " " << i.second << endl;
			}
			ret.clear();
			chk2.clear();
			chk.clear();
		} // print result
		else{
			chk[s].insert(nowp);
		} // user id
	}
}