#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main(){
	int s=0,n,k=0;
	string a;
	scanf("%d", &n);
	cin >> a;
	n = a.size();
	for (int i = 0; i < n; i++){
		if (a[i] == 'L') s++;
		else k++;
	}
	if (!s) printf("%d", k);
	else printf("%d", k+s/2+1);
}