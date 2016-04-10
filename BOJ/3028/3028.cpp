#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a[51];
	int re = 1;
	cin >> a;
	int b = strlen(a);
	for (int i = 0; i < b; i++){
		if (a[i] == 'A'){
			if (re == 1){
				re = 2;
			}
			else if (re == 2){
				re = 1;
			}
		}
		else if (a[i] == 'B'){
			if (re == 2){
				re = 3;
			}
			else if (re == 3){
				re = 2;
			}
		}
		else if (a[i] == 'C'){
			if (re == 3){
				re = 1;
			}
			else if (re == 1){
				re = 3;
			}
		}
	}
	cout << re << endl;
}