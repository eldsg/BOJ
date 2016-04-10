#include <iostream>
#include <string.h>
#include <string>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main(){
	int testcase, m = 0, n = 0, i, k = 0, l = 0, check = 1;
	char b[101][101] = {0};	
	string a,d;
	cin >> testcase;
	getchar();
	while (testcase != 0){
		getline(cin, a);
		fill(&b[0][0], &b[100][101], '\0');
		k = 0;
		for (l = 0; l < a.size();){
			int j = 0;
			while (a[l] != ' ' && a[l] != '\0'){
				b[k][j] = a[l];
				j++;
				l++;
			}
			l++;
			k++;
		}
		while (getline(cin, d), d != "what does the fox say?"){
			n = 0;
			int len = d.size();
			int lent = len;
			char c[101] = { 0 };
			while (d[len] != ' '){
				n++;
				len--;
			}
			while (d[lent] != ' '){
				c[n-1] = d[lent];
				n--;
				lent--;
			}
			for (i = 0; i < k; i++){
				check = 1;
				for (int z = 0; z < 10; z++){
					if (c[z] != b[i][z]){
						check = 0;
						break;
					}
				}
				if (check == 1){
					strcpy(b[i], "\0");
				}
			}
		}
		for (int q = 0; q < k; q++){
			if (b[q][0] != NULL){ cout << b[q]<< " "; }
		}
		cout << endl;
		testcase--;
	}
}