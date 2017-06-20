#include<cstdio>
#include<map>
#include<string>
#include<iostream>

using namespace std;

int main(){
	int tc;
	scanf("%d", &tc);
	map<string, int> ck;
	map<string, int> ck2;
	string a[1001];
	int s[1001];
	string ret;
	int temp = 0;
	int maxx = -1;
	bool check = false;
	for(int i = 0; i < tc; i++){
		cin >> a[i] >> s[i];
		ck[a[i]] += s[i];
	}
	for(auto it = ck.begin(); it != ck.end(); it++){
		if(it->second > maxx){
			maxx = it->second;
			ret = it->first;
		}
		if(it->second == maxx){
			check = true;
		}
	}
	if(check){
		for(int i = 0; i < tc; i++){
			ck2[a[i]] += s[i];
			if(ck2[a[i]] >= maxx && ck[a[i]] == maxx){
				cout << a[i] << endl;
				break;
			}
		}
	}
	else{
		cout << ret << endl;
	}
}
