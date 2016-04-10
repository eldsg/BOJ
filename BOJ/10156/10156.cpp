#include <iostream>
using namespace std;

int main(){
	int price; // 과자 한개의 가격
	int size; // 사려고 하는 과자의 개수
	int now; // 현재 동수가 가진 돈
	int nextmoney; // 받아야 될 돈
	cin >> price >> size >> now;
	nextmoney = price*size - now;
	if (nextmoney < 0) { nextmoney = 0; }
	cout << nextmoney;
}