#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

char modify(const char c)
{
	if (c=='(' || c=='[' || c=='{') return '(';
	else if (c==')' || c==']' || c=='}') return ')';
	else if (c==',' || c==';') return ',';
	else if (isalpha(c)) return tolower(c);
	else return c;
}

void nospace(string& str)
{
	str.insert(0, 1, ' ');
	for (int i=0; i<str.size();) {
		if (ispunct(str[i]) && i+1<str.size() && str[i+1]==' ')
			str.erase(i+1, 1);
		else if (str[i]==' ' &&  i+1<str.size() && str[i+1]==' ')
			str.erase(i+1, 1);
		else if (ispunct(str[i]) && i!=0 && str[i-1]==' ') {
			str.erase(--i, 1);
		}
		else
			++i;
	}
}

int main(int, char**)
{
	int K; cin>>K; cin.ignore(1);
	for (int S=1; S<=K; ++S) {
		string str1, str2;
		getline(cin, str1);
		getline(cin, str2);
		transform(str1.begin(), str1.end(), str1.begin(), modify);
		transform(str2.begin(), str2.end(), str2.begin(), modify);
		nospace(str1);
		nospace(str2);
		cout<<"Data Set "<<S<<": ";
		if (str1==str2) cout<<"equal"<<endl;
		else cout<<"not equal"<<endl;
		if (S!=K) cout<<endl;
	}
}