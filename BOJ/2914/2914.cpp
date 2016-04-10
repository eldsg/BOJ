#include<iostream>
using namespace std;
int main(){
	double a; // 수록된 곡수
	double i; // 평균값
	double melody;
	cin >> a >> i;
	melody = a*(i - 1) + 1;
	cout << melody;
}