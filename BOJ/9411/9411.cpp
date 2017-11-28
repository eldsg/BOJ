#include <bits/stdc++.h>

using namespace std;
struct llld{
	int num[31];
	int decpt;
	int sign;
}nu[101];
int tc;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> tc;
	while(tc--){
		int k = 0, n;
		while(1){
			string s;
			cin >> s;
			cout << s << endl;
			int size = s.size();
			if(size == 1 && s[0] == '0') break;
			for(int i = 0; i < size; i++){
				//cout << i << " ";
				if(s[i] == '-'){
					nu[k].sign = -1;
					continue;
				}
				else if(s[i] == '.'){
					nu[k].decpt = i;
					continue;
				}
				else{
					nu[k].num[i+n] = s[i]-'0';
				}
			}
			k++;
		}
		//cout << k << endl;
		for(int i = 0; i < k; i++){
			for(int j = 0; j < 31; j++){
				cout << nu[i].num[j] << " ";
			}
			cout << nu[i].decpt << endl;
		}
	}
}