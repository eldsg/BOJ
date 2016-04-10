#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int score[5], size, i, j;
	cin >> size;
	for (i = 0; i < size; i++){
		for (j = 0; j < 5; j++){
			cin >> score[j];
		}
		sort(score, score + 5);
		score[0] = 0;
		score[4] = 0;
		if (abs(score[1] - score[3]) > 3){
			cout << "KIN" << endl;
		}
		else cout << score[1] + score[2] + score[3] << endl;
	}
}