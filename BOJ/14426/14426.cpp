#include <bits/stdc++.h>

using namespace std;

vector<string> a;

int main(){
	int n, m, ret = 0;
	string c;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		cin >> c;
		a.push_back(c);
	}
	for(int i = 0; i < m; i++){
		cin >> c;
		for(int j = 0; j < n; j++){
			bool chk = false;
			for(int k = 0; c[k]; k++){
				if(c[k] == a[j][k]) continue;
				else{
					chk = true;
					break;
				}
			}
			if(!chk){
				ret++;
				break;
			}
		}
	}
	printf("%d\n", ret);
}