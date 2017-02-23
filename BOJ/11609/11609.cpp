#include<string>
#include<cstring>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

bool comp(pair<string, string> a, pair<string, string> b){
	if(a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

vector<pair<string, string> > ret;

int main(){
	int t;
	scanf("%d\n", &t);
	for(int i = 0; i < t; i++){
		string temp, s1="", s2="";
		getline(cin, temp);
		int size = temp.size();
		bool check = true;
		for(int j = 0; j <size; j++){
			if(temp[j] == ' '){
				check = false;
				continue;
			}
			if(check) s1+=temp[j];
			else s2+=temp[j];
		}
		ret.push_back(make_pair(s1, s2));
	}
	sort(ret.begin(), ret.end(), comp);
	for(int i = 0; i < ret.size(); i++){
		cout << ret[i].first << " " << ret[i].second << endl;
	}
}
