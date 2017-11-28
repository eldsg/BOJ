#include <bits/stdc++.h>

using namespace std;

#define fastio() ios::sync_with_stdio(0),cin.tie(0);

int n, m;
string a;
deque<int> ret;

int main(){
	fastio();
	cin >> n;
	//cout << n << endl;
	while(n--){
		cin >> a;
		if(a[0] == 'p'){
			if(a[1] == 'u'){
				cin >> m;
				if(a[5] == 'f') ret.push_front(m);
				else ret.push_back(m);
			}
			else{
				if(a[4] == 'f'){
					if(ret.empty()) cout << -1 << endl;
					else{
						cout << ret.front() << endl;
						ret.pop_front();
					}
				}
				else{
					if(ret.empty()) cout << -1 << endl;
					else{
						cout << ret.back() << endl;
						ret.pop_back();
					}
				}
			}
		}
		else if(a[0] == 's'){
			cout << ret.size() << endl;
		}
		else if(a[0] == 'e'){
			if(ret.empty()) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if(a[0] == 'f'){
			if(ret.empty()) cout << -1 << endl;
			else cout << ret.front() << endl;
		}
		else if(a[0] == 'b'){
			if(ret.empty()) cout << -1 << endl;
			else cout << ret.back() << endl;
		}
	}
}