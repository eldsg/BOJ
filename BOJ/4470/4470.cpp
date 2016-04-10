#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
	int a;
	string b;
	scanf("%d", &a);
	getchar();
	for (int i = 1; i <= a; i++){
		getline(cin, b);
		cout << i << ". " << b << endl;
	}
}