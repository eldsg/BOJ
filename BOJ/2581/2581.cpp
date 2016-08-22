#include<iostream>
#include<cmath>

using namespace std;

int prime(int num){
	if (num == 1){ return 1; }
	int i;
	for (i = 2; i <= sqrt(num); i++){
		if (num%i == 0){
			return 1;
		}
	}
	return 0;
}
int main(){
	int M, N,j,k=0,result =0, result1[10000];
	cin >> M >> N;
	for (j = M; j <= N; j++){
		if (prime(j) == 0){
			result += j;
			result1[k] = j;
			k++;
		}
	}
	if(!result) cout << "-1" << endl;
	else{
		cout << result << endl;
		cout << result1[0] << endl;
	}
}
