#include <bits/stdc++.h>

using namespace std;

string k[101];
string kk;
bool check(){
	int size = kk.size();
	for(int i = 0; i < size/2; i++){
		if(kk[i] != kk[size-i-1]) return false;
	}
	return true;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> k[i];
		}
		bool ck = false;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(i == j) continue;
				kk = k[i] + k[j];
				//cout << kk << endl;
				if(check()){
					ck = true;
					break;
				}
			}
			if(ck) break;
		}
		if(ck) cout << kk << endl;
		else cout << 0 << endl;
	}
}