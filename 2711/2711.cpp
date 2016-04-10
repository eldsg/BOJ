#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int testcase, miss, len;
	char arry[100];
	cin >> testcase;
	while (testcase != 0){
		cin >> miss >> arry;
		len = strlen(arry);
		arry[miss - 1] = '\0';
		for (int i = 0; i < len; i++){
			if (arry[i] != '\0')cout << arry[i];
		}
		cout << endl;
		testcase--;
	}
}