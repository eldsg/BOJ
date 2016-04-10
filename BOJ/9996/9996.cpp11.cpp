#include<stdio.h>
#include<regex>
#include<string>
#include<iostream>
using namespace std;

int main(){
	int testcase;
	string regex_full;
	regex temp;
	scanf("%d", &testcase);
	cin >> regex_full;
	string regex_fulltemp = regex_full;
	regex_full.resize(regex_full.size()+1);
	for(int i = 0; i< regex_full.size(); i++){
		if(regex_full[i] == '*'){
			regex_full[i] = '.';
			regex_full[i+1] = '*';
			for(int j = i+2; j<regex_full.size(); j++){
				regex_full[j] = regex_fulltemp[j-1];
			}
			break;
		}
	}
	temp = regex_full;
	while(testcase--){
		string match1;
		cin >> match1;
		if(regex_match(match1, temp)){
			printf("DA\n");
		}
		else{
			printf("NE\n");
		}
	}
}
