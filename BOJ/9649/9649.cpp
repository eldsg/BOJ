#include<iostream>
using namespace std;
int gcd(int a, int b){
	if (b == 0)
		return a;
	gcd(b, a%b);
}
int main(){
	int A, B, C, D, E, F;
	while (cin >> A >> B >> C){
		if (A == !cin || B == !cin || C == !cin){ break; }
		D = A*B;
		E = C - B;
		F = gcd(D, E);
		D /= F;
		E /= F;
		cout << D << "/" << E << endl;
	}

}