#include <iostream>
using namespace std;

int main(){
	int *tempo;
	int n, k;
	int i, temp, temp2;
	cin >> n >> k;
	tempo = new int[n];
	temp = 0;
	for (i = 0; i < n; i++){
		cin >> tempo[i];
	}
	for (i = 0; i < k; i++){
		temp += tempo[i];
	}
	temp2 = temp;
	for (i = 0; i < n - k; i++){
		temp = temp - tempo[i] + tempo[i + k];
		if (temp > temp2){
			temp2 = temp;
		}
	}
	delete tempo;
	cout << temp2;
}