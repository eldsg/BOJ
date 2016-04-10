#include <iostream>
using namespace std;

int main(){
	int testcase, i, j, k, num;
	cin >> testcase;
	while (testcase != 0){
		cin >> num;
		int tempsum = -10000 , tempsum1 = 0;
		while (num != 0){
			int N;
			cin >> N;
			if (tempsum1 < 0){
				tempsum1 = N;
			}
			else tempsum1 = tempsum1 + N;
			if (tempsum1 < tempsum) tempsum = tempsum;
			else tempsum = tempsum1;
			num--;
		}
		cout << tempsum << endl;
		testcase--;
	}
}