#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	char c[16];
	c[0] = 'A';
	int sum = 0;
	c[15] = '.';
	for (int i = 1; i < 15; i++){
		c[i] = c[i - 1] + 1;
	}
	pair<int, int> a[16];
	char b[16];
	for (int i = 0; i < 4; i++){
		a[i].first = 0;
		a[i].second = i;
	}
	for (int i = 4; i < 8; i++){
		a[i].first = 1;
		a[i].second = i - 4;
	}
	for (int i = 8; i < 12; i++){
		a[i].first = 2;
		a[i].second = i - 8;
	}
	for (int i = 12; i < 16; i++){
		a[i].first = 3;
		a[i].second = i - 12;
	}
	for (int i = 0; i < 16; i++){
		cin >> b[i];
	}
	for (int i = 0; i < 16; i++){
		if (b[i] == '.')continue;
		if (b[i] != c[i]){
			if (c[i] == '.') sum += abs(a[b[i] - 65].first - a[15].first) + abs(a[b[i] - 65].second - a[15].second);
			else sum += abs(a[b[i] - 65].first - a[(c[i] - 65)].first) + abs(a[b[i] - 65].second - a[c[i] - 65].second);
		}
	}
	cout << sum;
}