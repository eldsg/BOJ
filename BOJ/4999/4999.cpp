#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a[1001], b[1001];
	cin >> a >> b;
	if (strlen(a) >= strlen(b)){ cout << "go" << endl; }
	else cout << "no" << endl;
}