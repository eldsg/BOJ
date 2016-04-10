#include <iostream>
using namespace std;

int main(){
	int t,a,i,j,result[1000];
	cin >> t;
	while (t--){
		cin >> a;
		for (i = 0; a > 0; i++){
			result[i] = a % 3;
			a /= 3;
		}
		for (j = i - 1; j >= 0; j--){
			if (j == 0){ cout << result[j] << endl; }
			else cout << result[j] << " ";
		}
	}
}