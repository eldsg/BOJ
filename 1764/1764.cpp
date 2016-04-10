#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
string f[500000];
map<string, int> a;
int main(){
	int b, c, i = 0, result=0;
	cin >> b >> c;
	while (b--){
		string d;
		cin >> d;
		a[d]++;
	}
	while (c--){
		string d;
		cin >> d;
		if (a[d] != 0) {
			f[i++] = d;
			result++;
		}
	}
	sort(f, f + result);
	cout << result << endl;
	for (int i = 0; i < result; i++){
		cout << f[i] << endl;
	}
}