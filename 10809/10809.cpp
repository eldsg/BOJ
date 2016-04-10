#include<stdio.h>
#include<string>
#include<cstdlib>
#include<cstring>
#include<memory.h>
#include<iostream>
using namespace std;
int alpha[32];
string a;
int main(){
	cin >> a;
	memset(alpha, -1, sizeof(alpha));
	int size = a.size();
	for (int i = 0; i < size; i++){
		if (alpha[a[i] - 'a'] == -1) alpha[a[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++){
		printf("%d ", alpha[i]);
	}
}