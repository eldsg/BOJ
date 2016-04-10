#include <iostream>

using namespace std;

int main()
{
	int s[5], i;
	cin >> s[0] >> s[1] >> s[2] >> s[3] >> s[4];
	for (i = 0; i < 5; i++){
		if (s[i] < 40){
			s[i] = 40;
		}
	}
	cout << (s[0]+s[1]+s[2]+s[3]+s[4]) / 5;
}