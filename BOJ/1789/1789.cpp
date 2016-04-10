#include <iostream>
using namespace std;

int main(){
	long long N;
	cin >> N;
	for (long long i = 1; i <= N; i++){
		if ((i*i + i) / 2 > N){
			cout << i - 1 << endl;
			break;
		}
	}
}