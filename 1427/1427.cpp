#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool compare(const int &i, const int &j)
{
	return i > j;
}
int main(){
	string a;
	long long int c;
	char *b;
	getline(cin, a);
	b = new char[a.size()];
	c = a.size();
	b = (char*)a.c_str();
	sort(b, b + c, compare);
	cout << b << endl;
}