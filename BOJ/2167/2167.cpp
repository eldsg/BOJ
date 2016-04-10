#include<iostream>
using namespace std;

int main(){
	int N, M, arr[310][310], k, karr[10001][4], result = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++){
		for (int j = 1; j <= M; j++){
			cin >> arr[i][j];
		}
	}
	cin >> k;
	for (int i = 0; i < k; i++){
		for (int j = 0; j < 4; j++){
			cin >> karr[i][j];
		}
        result = 0;
		for (int k = karr[i][0]; k <= karr[i][2]; k++){
			for (int l = karr[i][1]; l <= karr[i][3]; l++){
				result += arr[k][l];
			}
		}
		cout << result << endl;
	}
}