#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	int test,i;
	string *a;
	char b[1000];
	while (cin >> test, test != 0){
		getchar();
		a = new string[test];
		for (i = 0; i < test; i++){
			getline(cin, a[i]);
		}
		int k = 1;
		for (i = 0; i < test; i++){
			strcpy(b, a[i].c_str());
			while (b[k] != ' '){
				if (b[k] == '\0') { break; }
				k++;
			}
		}
		cout << k+1 << endl;
	}
}