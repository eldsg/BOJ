#include<iostream>
using namespace std;

int main(){
	int N, M, num[10000],j = 1;
	cin >> N >> M;
	for (int i = 1; i <= N; i++){
		if (N%i == 0){ 
			num[j] = i;
			j++;
		}
	}
	if (num[M] < 0){
		cout << 0 << endl;
		return 0;
	}
	cout << num[M] << endl;
}