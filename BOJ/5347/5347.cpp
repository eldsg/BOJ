#include <iostream>
using namespace std;
int gcd(long long int a, long long int b){
	int temp = a%b;
	if (temp == 0)
		return b;
	else return gcd(b, temp);
}
long long int lcm(long long int a, long long int b){
	return a*b / gcd(a, b);
}
int main(){
	long long int a, b, T;
	cin >> T;
	while (T--){
		cin >> a >> b;
		cout << lcm(a, b) << endl;
	}
}