#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int i, j, len;
	char a[128] = { '\0' };
	cin >> a;
	len = strlen(a);
	for (i = 0; i < len; i++){
		if (a[i] > 64 && a[i] < 91){
			cout << a[i];
		}
	}
}