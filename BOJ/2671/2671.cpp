#include<cstdio>
#include<string>
#include<regex>
#include<iostream>

using namespace std;

int main(){
	regex pt("(100+1+|01)+");
	smatch m;
	string s;
	cin >> s;
	if(regex_match(s, m, pt)){
		printf("SUBMARINE\n");
	}
	else printf("NOISE\n");
}
