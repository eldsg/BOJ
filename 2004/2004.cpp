#include <iostream>
using namespace std;
int main(){
	unsigned long long int n, m;
	unsigned long long int i, j = 5, k, tnum, fnum, tnum1, fnum1, tnum2, fnum2, lasttnum, lastfnum;
	cin >> n >> m;
	k = n - m;
	fnum = 0, fnum1 = 0, fnum2 = 0;
	tnum = 0, tnum1 = 0, tnum2 = 0;
	i = 0;
	while (1){
		if (n >= (2 << i)){
			tnum += n / (2 << i);
			i++;
		}
		else break;
	}
	i = 5;
	while (1){
		if (n >= i){
			fnum += n / i;
			i = i * 5;
		}
		else break;
	}
	i = 0;
	while (1){
		if (m >= (2 << i)){
			tnum1 += m / (2 << i);
			i++;
		}
		else break;
	}
	i = 0;
	while (1){
		if (k >= (2 << i)){
			tnum2 += k / (2 << i);
			i++;
		}
		else break;
	}
	i = 5;
	while (1){
		if (m >= i){
			fnum1 += m / i;
			i = i * 5;
		}
		else break;
	}
	i = 5;
	while (1){
		if (k >= i){
			fnum2 += k / i;
			i = i*5;
		}
		else break;
	}
	lasttnum = tnum - tnum1 - tnum2;
	lastfnum = fnum - fnum1 - fnum2;
	cout << ((lasttnum > lastfnum) ? lastfnum : lasttnum) << endl;
}