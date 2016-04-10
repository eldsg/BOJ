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
    int a,b,c;
    cin >> a;
    for(int i = 0; i<a; i++){
        cin >> b >> c;
        cout << lcm(b, c, gcd(b, c)) << endl;
    }
}