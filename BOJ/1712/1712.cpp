#include <iostream>
using namespace std;

int main(){
	long long int a, b, c, i=1;
	cin >> a >> b >> c;
	if (b >= c)	{
		cout << -1 << endl;
		return 0;
	}
	i = a / (c - b);
	cout << i+1 << endl;
}