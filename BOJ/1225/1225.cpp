#include <iostream>
#include <string.h>
using namespace std;

int main(){
	unsigned long long i, j, k = 0,l =0;
	char a[100000], b[100000];
	cin >> a >> b;
	unsigned long long c = strlen(a);
	unsigned long long d = strlen(b);
	for (i = 0; i < c; i++){
		k+= a[i]-'0';
	}
    for(j=0; j<d; j++){
        l+= b[j]-'0';
    }
	cout << k*l << endl;
}