#include <iostream>
using namespace std;

int main(){
	int testcase; // 테스트케이스 개수
	int size; // 숫자 개수
	int num[100], i, j, sum1 = 0;
	cin >> testcase;
	for (i = 0; i < testcase; i++){
		cin >> size;
		for (j = 0; j < size; j++){
			cin >> num[j];
			sum1 += num[j];
		}
		cout << sum1 << endl;
		sum1 = 0;
	}
}