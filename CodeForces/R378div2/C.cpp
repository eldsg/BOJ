#include <bits/stdc++.h>

using namespace std;

int n, x, tt;
int f[501], l[501];
vector<pair<int, char> > ret;
void rem(int index){
	n--;
	for(int i = index; i <= n; i++) f[i] = f[i+1];
}

int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &f[i]);
	scanf("%d", &x);
	for(int i = 0; i < x; i++) scanf("%d", &l[i]);
	int pos = 0;
	while(pos < x){
		int sum, mx, mxn;
		if(f[0] == l[pos]){
			rem(0);
			pos++;
			tt++;
			continue;
		}
		sum = f[0], mx = -1;
		for(int i = 1; i < n && sum < l[pos]; sum += f[i], i++){
			if(f[i] != f[i-1] && mx < f[i]+f[i-1]){
				mx = f[i]+f[i-1];
				mxn = i;
			}
		}
		if(mx == -1 || sum != l[pos]) return puts("NO");
		if(f[mxn] > f[mxn-1]) ret.push_back({mxn+1+tt, 'L'});
		else ret.push_back({mxn+tt, 'R'});
		f[mxn-1] += f[mxn];
		rem(mxn);
	}
	if(n >= 1) return puts("NO");
	else{
		puts("YES");
		for(int i = 0; i < ret.size(); i++){
			printf("%d %c\n", ret[i].first, ret[i].second);
		}
	}
}