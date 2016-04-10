#include<iostream>
using namespace std;

int main(){
	int N, test[101], score = 0, scorenum = 1;
	cin >> N;
	for (int i = 1; i <= N; i++){
		cin >> test[i];
		if (test[i] == 1){
			if (test[i - 1] == 1){
				scorenum++;
			}
			score += scorenum;
			if (test[i - 1] == 0){
				scorenum = 1;
			}
		}
		else scorenum = 1;
	}
	cout << score << endl;
}