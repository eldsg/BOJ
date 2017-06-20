#include<cstdio>
#include<iostream>
#include<map>
#include<string>
using namespace std;

map<string, int> r;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		string s;
		cin >> s;
		if(!r[s]){
			puts("OK");
			r[s]++;
		}
		else{
			cout << s << r[s] << endl;
			r[s]++;
		}
	}
}
