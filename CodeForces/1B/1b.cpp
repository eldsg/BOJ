#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int tc;
	scanf("%d", &tc);
	while(tc--){
		int k, t, i = 1;
		string a;
		cin >> a;
		bool ck = false;
		if(a[0] == 'R' && a[1] >= '0' && a[1] <= '9' && a.find("C") != string::npos){
			ck = true;
		}
		if(ck){
			k = 0, t = 0;
			for(i; a[i] != 'C'; i++){
				k *= 10;
				k += a[i]-'0';
			}
			i+=1;
			for(i; a[i]; i++){
				t *= 10;
				t += a[i] -'0';
			}
			string temp = "";
			while(t){
				if(t%26 == 0){
					temp += 'Z';
					t/=26;
					t-=1;
				}
				else{
					temp += t%26 + 'A' - 1;
					t/=26;
				}
			}
			reverse(temp.begin(), temp.end());
			cout << temp << k << endl;
		}
		else{
			k = 0, t = 0;
			for(i = 0; (a[i] < '0' || a[i] > '9'); i++){
				k += a[i] -'A' + 1;
				k *= 26;
			}
			k /= 26;
			for(i; a[i]; i++){
				t *= 10;
				t += a[i]-'0';
			}
			cout << "R" << t << "C" << k << endl;
		}

	}
}
