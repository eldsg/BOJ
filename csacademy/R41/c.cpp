#include <bits/stdc++.h>

using namespace std;

int n, k, m;
int ra[33333];
bool chk[33333];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> k >> m;
	if(k < (1 << m)) cout << -1 << endl;
	else if((1<<n) == k && m != n) cout << -1 << endl;
	else{
		int kk = 1 << n;
		ra[1] = k;
		chk[k] = true;
		m+=1;
		while(m <= n){
			while(1){
				if(chk[kk]) kk--;
				else break;
			}
			ra[1 << m] = kk;
			chk[kk] = true;
			m++;
		}
		int maxx = 1 << n;
		for(int i = 1; i <= maxx; i++){
			if(ra[i]) cout << ra[i] << " ";
			else{
				for(int i = 1; i <= maxx; i++){
					if(!chk[i]){
					 cout << i << " ";
					 chk[i] = true;
					 break;
					}
				}
			}
		}

	}

}