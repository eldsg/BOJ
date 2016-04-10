#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
int main(){
	int d;
	scanf("%d", &d);
	getchar();
	while (d--){
		string a;
		int c[30] = { 0 };
		fill(c, c + 30, 0);
		int b = 2015, i = 0;
		getline(cin, a);
		for (i = 0; i<a.size(); i++){
			if (!c[a[i] - 'A']){
				b -= a[i];
				c[a[i] - 'A'] = 1;
			}
		}
		printf("%d\n", b);
	}
}