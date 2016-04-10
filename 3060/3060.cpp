#include<iostream>
using namespace std;
int main(){
	int t,a[6];
	cin >> t;
	while (t--){
		long long int N, result=0,total = 0, M;
		cin >> N;
		M = N;
		for (int i = 0; i < 6; i++){
			cin >> a[i];
			total += a[i];
		}
		while (M >= 0){
			M = N;
			result++;
			M -= total;
			total *= 4;
		}
		cout << result << endl;
	}
}