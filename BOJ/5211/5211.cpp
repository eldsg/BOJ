#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
using namespace std;
vector<char> c;
int main(){
	string a;
	int C = 0, A = 0;
	getline(cin, a);
	int b = a.size();
    c.push_back(a[0]);
	for (int i = 0; i < b; i++){
		if (a[i] == '|') c.push_back(a[i + 1]);
	}
	int d = c.size();
	for (int i = 0; i < d; i++){
		if (c[i] == 'A' || c[i] == 'D' || c[i] == 'E') A++;
		else if (c[i] == 'C' || c[i] == 'F' || c[i] == 'G') C++;
	}
	if (C > A) printf("C-major");
	else if (C < A) printf("A-minor");
	else {
		if (a[b - 1] == 'A' || a[b - 1] == 'D' || a[b - 1] == 'E') printf("A-minor");
		else printf("C-major");
	}
}