#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<string.h>
using namespace std;

map<char, string> map1;
map<string, char> map2;
void init(){
	map1['A'] = ".-";
	map1['B'] = "-...";
	map1['C'] = "-.-.";
	map1['D'] = "-..";
	map1['E'] = ".";
	map1['F'] = "..-.";
	map1['G'] = "--.";
	map1['H'] = "....";
	map1['I'] = "..";
	map1['J'] = ".---";
	map1['K'] = "-.-";
	map1['L'] = ".-..";
	map1['M'] = "--";
	map1['N'] = "-.";
	map1['O'] = "---";
	map1['P'] = ".--.";
	map1['Q'] = "--.-";
	map1['R'] = ".-.";
	map1['S'] = "...";
	map1['T'] = "-";
	map1['U'] = "..-";
	map1['V'] = "...-";
	map1['W'] = ".--";
	map1['X'] = "-..-";
	map1['Y'] = "-.--";
	map1['Z'] = "--..";
	map1['_'] = "..--";
	map1[','] = ".-.-";
	map1['.'] = "---.";
	map1['?'] = "----";
	for(auto it = map1.begin(); it!=map1.end(); it++){
		map2[it->second] = it->first;
	}
}
char s[2000];
int number[2000];
int main(){
	init();
	while(gets(s)){
		string n = "";
		int size = strlen(s);
		for(int i = 0; i<size; i++){
			n+=map1[s[i]];
			number[i] = map1[s[i]].size();
		}
		string temp;
		int k = 0;
		string ns = "";
		for(int i = size-1; i>=0; i--){
			temp = n.substr(k , number[i]);
			ns+= map2[temp];
			k+= number[i];
		}
		printf("%s\n", ns.c_str());
	}
}
