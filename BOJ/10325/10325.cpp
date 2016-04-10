#include <iostream>
using namespace std;

int main(){
	int t, num,k;
	double num1, num2, num3;
	double x;
	cin >> t;
	while (t--){
		cin >> num;
		int max = 0;
		for (int i = 1; i <= num; i++){
			cin >> num1 >> num2 >> num3;
			x = num2 / (2 * num1);
			double temp = -num1*x*x + num2*x + num3;
			if (temp > max) {
				max = temp;
				k = i;
			}
		}
		cout << k << endl;
	}
}