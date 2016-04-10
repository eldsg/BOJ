#include <iostream>
using namespace std;

int main(){
	int *car, tk, n, a, b; // a = 옵션 개수 b = 옵션 가격
	cin >> tk;
	car = new int[tk];
	int temp = 0;
	for (int i = 0; i < tk; i++){
		cin >> car[i]; //차 가격 입력
		cin >> n;
		for (int j = 0; j < n; j++){
			cin >> a >> b;
			temp += (a*b);
		}
		car[i] = car[i] + temp;
		temp = 0;
	}
	for (int i = 0; i < tk; i++){
		cout << car[i] << endl;
	}
}