#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

map<int, string> nts;
map<int, string> cnt;
void init(){
	nts[0] = "zero", nts[1] = "one", nts[2] = "two", nts[3] = "three", nts[4] = "four", nts[5] = "five";
	nts[6] = "six", nts[7] = "seven", nts[8] = "eight", nts[9] = "nine";
	cnt[2] = "double", cnt[3] = "triple", cnt[4] = "quadruple", cnt[5] = "quintuple";
	cnt[6] = "sextuple", cnt[7] = "septuple", cnt[8] = "octuple", cnt[9] = "nonuple";
	cnt[10] = "decuple";
}

void proc(char s[], int a, int b){
	int c = 0;
	for(int i = a; i < b; i++){
		while(s[i] == s[i+1] && i+1 < b){
			c++;
			i++;
		}
		if(c == 0) cout << nts[s[i]-'0'] << " ";
		else if(c >= 10) {
			while(c--){
				cout << nts[s[i]-'0'] << " ";
			}
		}
		else{
			cout << cnt[c+1] << " " << nts[s[i]-'0'] << " ";
		}
		c= 0;
	}
}
int main(){
	int T;
	init();
	scanf("%d", &T);
	for(int mm = 0; mm < T; mm++){
		printf("Case #%d: ", mm+1);
		vector<int> temp;
		char str[101], str2[101];
		scanf("%s %s", str, str2);
		int k = 0;
		for(int i = 0; str2[i]; i++){
			if(str2[i] == '-'){
				temp.push_back(k);
				k = 0;
			}
			else{
				k*=10;
				k+=str2[i]-'0';
			}
		}
		temp.push_back(k);
		int size = temp.size(), kk = 0;
		k = 0;
		kk = k + temp[0];
		for(int i = 0; i < size; i++){
			proc(str, k, kk);
			k += temp[i];
			kk += temp[i+1];
		}
		printf("\n");
	}
}
