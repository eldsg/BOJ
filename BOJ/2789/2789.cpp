#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char a[128] = {'\0'};
	int i = 0, len, j = 0, k =0;
	cin >> a;
	len = strlen(a);
	for (i = 0; i < len; i++){
		if (a[i] == 'C') { a[i] = '\0'; j++; }
		if (a[i] == 'A') { a[i] = '\0'; j++; }
		if (a[i] == 'M') { a[i] = '\0'; j++; }
		if (a[i] == 'B') { a[i] = '\0'; j++; }
		if (a[i] == 'R') { a[i] = '\0'; j++; }
		if (a[i] == 'I') { a[i] = '\0'; j++; }
		if (a[i] == 'D') { a[i] = '\0'; j++; }
		if (a[i] == 'G') { a[i] = '\0'; j++; }
		if (a[i] == 'E') { a[i] = '\0'; j++; }
	}
	i = 0;
	for (i = 0; i < len; i++){
		k = 0;
		for (k = 0; k < len; k++){
			if (a[k] == '\0' && a[k + 1] == '\0'){
				a[k] = a[k + 1];
		}
			else if (a[k] == '\0' && a[k+1] != '\0'){
				a[k] = a[k + 1];
				a[k + 1] = '\0';
			}
			else if (a[k] != '\0' && a[k + 1] != '\0'){
				continue;
			}
		}
	}
	for (i = 0; i < len- j; i++){
		cout << a[i];
	}
}