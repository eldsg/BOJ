#include<iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long LL;
const int b = 1000000000;
typedef vector<int> v;
template<class T> inline int size(const T&c) { return c.size(); }
char a[1000];

string i2s(unsigned long long int x) {
	sprintf(a, "%d", x);
	return a;
}


bool prime(LL x) {
	if (x < 2) return false;
	for (unsigned long long int i = 2; i*i <= x; ++i) if (x%i == 0) return false;
	return true;
}
vector<LL> pn;
LL x1;
LL total;
void rec(LL il,long long int p, LL s) {
		total += x1 / il * s;
		while (p<size(pn)) {
				LL il2 = il * pn[p] * pn[p];
				if (il2>x1) break;
				++p;
				rec(il2, p, -s);
		}

}

LL f(LL x) {
	x1 = x;
	total = 0;
	rec(1, 0, +1);
	return total;
}


int main(void)
{	unsigned long long int n,t;
		cin >> n;
		for (LL x = 2; x*x <= 2000000000; ++x) if (prime(x)) pn.push_back(x);
		LL o = 0, r = 2000000000;
		while (r - o > 1)
		{
			LL c = (r + o) / 2;
			if (f(c) >= n) r = c; else o = c;
	}
		cout << r << endl;
}
