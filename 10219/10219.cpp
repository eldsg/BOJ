#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		int a, b;
		string c[16];
		scanf("%d %d", &a, &b);
		getchar();
		for(int i = 0; i<a; i++){
			getline(cin, c[i]);
		}
		for(int i = 0; i<a; i++){
			for(int j = b-1; j>=0; j--){
				printf("%c", c[i][j]);
			}
			printf("\n");
		}
	}
}
