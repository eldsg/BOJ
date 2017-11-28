#include <bits/stdc++.h>

using namespace std;

string a;
int size, ac[26];
bool check(){
	for(int i = 0; i < size/2; i++){
		if(a[i] != a[size-i-1]) return false;
	}
	return true;
}
bool checkfirst(){
	bool hey = false;
	for(int i = 0; i < size; i++){
		ac[a[i]-'A']++;
	}
	//for(int i = 0; i < 26; i++) printf("%d ", ac[i]);
	if(size & 1){
		for(int i = 0; i < 26; i++){
			if(!ac[i]) continue;
			if(hey && ac[i] & 1) return false;
			if(ac[i] & 1) hey = true;
		}
	}
	else{
		for(int i = 0; i < 26; i++){
			if(!ac[i]) continue;
			if(ac[i] & 1) return false;
		}
	}
	return true;
}
int main(){
	cin >> a;
	size = a.size();
	string ret;
	string k;
	int t = -1;
	if(checkfirst()){
		for(int i = 0; i < 26; i++){
			for(int j = 0; j < ac[i]/2; j++){
				ret += i+'A';
			}
			if(ac[i] & 1) t = i;
		}
		string kk = ret;
		reverse(ret.begin(), ret.end());
		kk += ret;
		if(t != -1){
			k = t+'A';
			kk.insert(kk.size()/2, k);
		}
		cout << kk << endl;
		return 0;
	}
	cout << "I'm Sorry Hansoo" << endl;
}