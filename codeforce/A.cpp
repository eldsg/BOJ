#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<string>
#include<iostream>
#include<map>

using namespace std;
int main(){
	int nf;
	string home;
	scanf("%d\n", &nf);
	getline(cin, home);
	for(int i = 0; i < nf; i++){
		string temp;
		getline(cin, temp);
	}
	if(nf%2 == 1) printf("contest\n");
	else printf("home\n");

}
