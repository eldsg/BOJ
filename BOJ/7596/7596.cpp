#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, tc = 1;
	while(1){
		scanf("%d ", &n);
		if(n == 0) break;
		printf("%d\n", tc++);
		vector<string> ret;
		string s;
		while(n--){
			getline(cin, s);
			ret.push_back(s);
		}
		sort(ret.begin(), ret.end());
		for(string i : ret) cout << i << endl;
	}
}