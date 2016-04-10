#include <iostream>
#include <string>
#include <string.h>
#include <memory.h>
#include <stdio.h>
using namespace std;

int main(){
	int N,i,j, spacebar[101];
	cin >> N;
	string a;
	getchar();
	while (N--){
		getline(cin, a);
		int count = 0;
		for (i = 0; i < a.size(); i++){
			if (count == 2) break;
			if (a[i] == ' '){
				spacebar[count++] = i;
			}
		}
		for (i = spacebar[1]+1; i < a.size(); i++){
			cout << a[i];
		}
		cout << " ";
		for (i = 0; i < spacebar[1]; i++){
			cout << a[i];
		}
		cout << endl;
	}
	
}