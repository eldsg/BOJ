#include <string>
#include <string.h>
#include <map>
#include <stdio.h>
#include <iostream>
using namespace std;
map<string, int> b;
map<string, int>::iterator it;
int main(){
	string a;
	cin >> a;
	int size = a.size();
	for(int i = 0; i<size; i++){
		for(int j = 1; j<=size; j++){
			if(i+j <= size){
				b[a.substr(i,j)]++;
			}
		}
	}
	/*
	for(it = b.begin(); it!=b.end(); it++){
		cout << it->first << endl;
	}
	*/
	printf("%d\n", b.size());
}
