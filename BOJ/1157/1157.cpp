#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main(){
	char a[1000001], result;
	int b, c[1000001] = { 0 },i, k = 1, j[1000001] = { 0 }, l = 0, e;
	cin >> a;
	b = strlen(a);
	for (i = 0; i < b; i++){
		if (a[i] >= 'a' && a[i] <= 'z'){
			a[i] = a[i] - 32;
		}
	}
	sort(a, a + b);
	for (i = 0; i < b; i++){
		if (a[i] == a[i + 1]){
			c[k] += 1;
			j[k] = i;
		}
		else {
			k++;
		}
	}
	k = k - 1;
	e = k;
	while (k != 0){
		if (l < c[k]){
			result = a[j[k]];
			l = c[k];
			i = k;
		}
		k--;
	}
	while (e != 0){
		if (e == i){
			e--;
			continue;
		}
		if (l == c[e]){
			cout << '?' << endl;
			return 0;
		}
		e--;
	}
	cout << result << endl;
}