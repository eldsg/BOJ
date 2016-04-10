#include<iostream>
#include<stdio.h>
#include<map>
#include<string>
using namespace std;
map<int, string> a;
map<string, int> f;
int check(const string a){
	if (a[0] >= '0' && a[0] <= '9') return 0;
	else return 1;
}
int main(){
	string d;
	int b, c;
	cin >> b >> c;
	for (int i = 1; i <= b; i++){
		cin >> d;
		f[d] = i;
		a[i] = d;
	}
	for (int i = 0; i < c; i++){
		string e;
		cin >> e;
		if (check(e)){
			cout << f[e] << endl;
		}
		else{
			int b = stoi(e);
			cout << a[b] << endl;
		}
	}
}