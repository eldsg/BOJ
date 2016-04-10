#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
	int t,b,i,j,k=0,c;
	bool check = true;
	char a[51][51];
	char d[51];
	cin >> t;
	for (i = 0; i < t; i++){
		cin >> a[i];
	}
	b = strlen(a[0]);
	for (i = 0; i < b; i++){
        check = true;
		for (j = 0; j < t; j++){
			if (a[0][i] != a[j][i]){
				check = false;
			}
		}
		if (check == true){
			d[k] = a[0][k];
			k++;
		}
		else {
			d[k] = '?';
			k++;
		}
	}
	for (i = 0; i < k; i++){
		cout << d[i];
	}
}