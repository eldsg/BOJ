#include <iostream>
#include <string>
using namespace std;

int main(){
	int a,i;
	int arry[100001];
	while (cin >> a, a != -1){
		int t = 0, c = 0;
		for (i = 1; i < a; i++){
			if (a % i == 0){
				arry[t] = i;
				t++;
				c += i;
			}
		}
		if (c == a){
			cout << a << " = ";
			for (i = 0; i < t; i++){
				if (i == t - 1){
					cout << arry[i];
				}
				else cout << arry[i]<< " + ";
			}
			cout << endl;
		}
		else cout << a << " is NOT perfect." << endl;
	}
}