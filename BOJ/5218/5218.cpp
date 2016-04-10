#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a[100], b[100];
	int test, i , j , k[100];
	cin >> test;
	while (test != 0){
		cin >> a >> b;
		for (i = 0; i < strlen(a); i++){
			for (j = 0; j < strlen(a); j++){
				if (a[i] > b[i]){
				k[i]=b[i] + 26 - a[i];
				}
				else if (a[i] <= b[i]){
					k[i] = b[i] - a[i];
				}
			}
		}
		cout << "Distances: ";
		for (i = 0; i < strlen(a); i++){
			cout << k[i] << " ";
			if (i == strlen(a)){
				cout << k[i];
			}
		}
		cout << endl;
		test--;
	}
	
}