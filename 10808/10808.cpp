#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int alpha[32];
string a;
int main(){
	cin >> a;
	int size = a.size();
	for (int i = 0; i < size; i++){
		alpha[a[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++){
		printf("%d ", alpha[i]);
	}
}