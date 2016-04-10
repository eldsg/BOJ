#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
	int testcase;
	scanf("%d", &testcase);
	getchar();
	while (testcase--){
		int count = 0, max = 0;
		string a;
		getline(cin, a);
		int size = a.size();
		for (int i = 0; i < size; i++){
			if (a[i] == '['){
				count++;
				if (count > max) max = count;
			}
			else if (a[i] == ']') count--;
		}
		printf("%d\n", 1 << max);
	}
}