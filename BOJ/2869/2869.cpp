#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double A, B, V, temp = 0;
    long long int y;
	cin >> A >> B >> V;
	y = ceil((V - B) / (A - B));
	cout << y << endl;
}