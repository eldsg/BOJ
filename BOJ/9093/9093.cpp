#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	int testcase;
	cin >> testcase;
	getchar();
	while (testcase != 0){
		string a;
		int j = 0;
		getline(cin, a);
		int c[100000],d[100000];
		d[0] = 0;
		int b = a.length();
		for (int i = 0; i <= b; i++){
			if (a[i] == ' ' || a[i] == '\0'){
				c[j++] = i;
				d[j] = i;
			}
		}
		for (int i = 0; i < j; i++){
			for (c[i]-1; c[i] > d[i]; c[i]--){
				if (a[c[i] - 1] == ' ') continue;
				cout << a[c[i]-1];
			}
			cout << " ";
		}
		cout << endl;
		testcase--;
	}
}