#include <bits/stdc++.h>

using namespace std;

string a, b, c, d;

int main(){
	cin >> a >> b >> c >> d;
	a += b;
	c += d;
	long long k = stoll(a);
	k += stoll(c);
	printf("%lld\n", k);
}