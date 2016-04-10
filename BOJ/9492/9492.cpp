#include<iostream>
#include<string>
using namespace std;
int main(){
	int test, i, j;
	string *a;
	string *b, *c;
	while (cin >> test, test != 0){
		a = new string[test];
		b = new string[test];
		c = new string[test];
		for (i = 0; i < test; i++){
			cin >> a[i];
		}
		int k = 0;
		for (i = 0; i < test; i++){
			if (test % 2 == 0){
				if (i < test / 2){
					b[i] = a[i];
				}
				if (i >= test / 2){
					c[k] = a[i];
					k++;
				}
			}
			if (test % 2 == 1){
				if (i <= test / 2){
					b[i] = a[i];
				}
				if (i > test / 2){
					c[k] = a[i];
					k++;
				}
			}
		}
		for (i = 0; i <= test/2; i++){
			if (b[i] == "\0") continue;
			cout << b[i] << endl;
			if (c[i] == "\0") continue;
			cout << c[i] << endl;
		}
	}
}