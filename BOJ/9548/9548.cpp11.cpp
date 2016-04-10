#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		string real;
		cin >> real;
		while (1){
			string a;
			cin >> a;
			if (a[0] == 'E') break;
			if (a[0] == 'I'){
				string b;
				int c;
				cin >> b;
				scanf("%d", &c);
				real.insert(c, b);
			}
			else if (a[0] == 'P'){
				int b, c;
				scanf("%d %d", &b, &c);
				for (b; b <= c; b++){
					if (b == c) printf("%c\n", real[b]);
					else printf("%c", real[b]);
				}
			}
		}
	}
}