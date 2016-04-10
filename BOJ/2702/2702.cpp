#include <iostream>
using namespace std;
int gcd(int a, int b){
	int temp = 0;
	while (b != 0){
		temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}
int lcm(int a, int b, int c){
	int l;
	l = (a / c) * (b / c) * c;
	return l;
}
int main(){
   	int t;
    cin >> t;
    while(t--){
	int num1, num2, gcd1, lcm1;
	cin >> num1 >> num2;
	gcd1 = gcd(num1, num2);
	lcm1 = lcm(num1, num2, gcd1);
    cout << lcm1 << " " << gcd1 << endl;
    }
}