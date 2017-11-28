#include <bits/stdc++.h>

using namespace std;

string s;

struct lr{
	int lz;
	int rz;
}lr[100001];
vector<int> p;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> s;
	int zero = 0, prev = 0, zc = 0;
	for(int i = 0; s[i]; i++){
		if(s[i] == '1'){
			if(i!=0){
				lr[i].lz = zero;
				lr[prev].rz = zero;
			}
			zero = 0;
			prev = i;
			p.push_back(i);
		}
		else{
			zero++;
			zc++;
		}
	}
	lr[prev].rz = zero;
	int rett = -1;
	for(auto i : p){
		int cnt = lr[i].lz + lr[i].rz + 1;
		if(cnt > rett){
			if(zc >= cnt) rett = cnt;
			else{
				if(cnt - 1 > rett) rett = cnt-1;
			}
		}

	}
	cout << rett << endl;
}