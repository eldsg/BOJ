#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<iostream>
using namespace std;

char str[16];
char ret[16];
int a, b;
void solve(int i, int c){
	if(c == a){
		int k = 0, l = 0;
		for(i=0; i < a; i++){
			if(ret[i] == 'a' || ret[i] == 'e' || ret[i] == 'i' || ret[i] == 'o' || ret[i] == 'u') k++;
			else l++;
		}
		if(k>0 && l>1) puts(ret);
		return;
	}
	for(; i < b; i++){
		if(str[i]) ret[c] = str[i], solve(i+1, c+1);
	}
}

int main(){
	scanf("%d %d", &a, &b);
	for(int i = 0; i < b; i++) getchar(), scanf("%c", str+i);
	sort(str, str+b);
//	for(int i = 0; i < b; i++) printf("%c", str[i]);
	solve(0, 0);
}
