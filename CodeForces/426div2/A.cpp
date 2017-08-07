#include <bits/stdc++.h>

using namespace std;
char cw[4] = {'v', '<', '^', '>'};
char ccw[4] = {'v', '>', '^', '<'};
int main(){
	char a, b;
	int c, d, e;
	scanf("%c %c %d", &a, &b, &c);
	if(c > 4){
		c %= 4;
	}
	if(a == 'v') d = 0, e = 0;
	else if(a == '<') d = 1, e = 3;
	else if(a == '^') d = 2, e = 2;
	else d = 3, e = 1;
	if(cw[(d+c)%4] == b && ccw[(e+c)%4] == b){
		puts("undefined");
	}
	else if(cw[(d+c)%4] == b) puts("cw");
	else if(ccw[(e+c)%4] == b) puts("ccw");
}