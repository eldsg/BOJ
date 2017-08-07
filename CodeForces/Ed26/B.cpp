#include <bits/stdc++.h>
using namespace std;
int n, m;
string s[101];
vector<int> color[4];
int chklow(int ind){
	for(int i = 0; i < m-1; i++){
		if(s[ind][i] != s[ind][i+1]) return 0;
	}
	if(s[ind][0] == 'R') return 1;
	else if(s[ind][0] == 'G') return 2;
	else return 3;
}
int chkcol(int ind){
	for(int i = 0; i < n-1; i++){
		if(s[i][ind] != s[i+1][ind]) return 0;
	}
	if(s[0][ind] == 'R') return 1;
	else if(s[0][ind] == 'G') return 2;
	else return 3;
}

int main(){
	scanf("%d%d", &n, &m);
	if(n < 3 && m < 3) return puts("NO");
	bool notrow = false, notcol = false;
	for(int i = 0; i < n; i++) cin >> s[i];
	for(int i = 0; i < n; i++){
		int temp = chklow(i);
		if(temp == 0){
			notrow = true;
			break;
		}
		else color[temp].push_back(i);
	}
	if(color[1].size() != color[2].size() || color[1].size() != color[3].size() || color[2].size() != color[3].size()) notrow = true;
	if(!notrow){
		for(int i = 1; i <= 3; i++){
			for(int j = 0; j < color[i].size()-1; j++){
				if(abs(color[i][j] - color[i][j+1]) != 1){
					notrow = true;
					break;
				}
			}
		} 
	}
	if(!notrow) return puts("YES");

	for(int i = 1; i <= 3; i++) color[i].clear();
	for(int i = 0; i < m; i++){
		int temp = chkcol(i);
		if(temp == 0){
			notcol = true;
			break;
		}
		else color[temp].push_back(i);
	}
//	printf("%d %d %d\n", color[1], color[2], color[3]);
	if(color[1].size() != color[2].size() || color[1].size() != color[3].size() || color[2].size() != color[3].size()) notcol = true;
	if(!notcol){
		for(int i = 1; i <= 3; i++){
			for(int j = 0; j < color[i].size()-1; j++){
				if(abs(color[i][j] - color[i][j+1]) != 1){
					notcol = true;
					break;
				}
			}
		} 
	}
	if(!notcol) return puts("YES");
	puts("NO");
}