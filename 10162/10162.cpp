#include <iostream>
using namespace std;

int main(){
	int A = 300, Acnt = 0;
	int B = 60, Bcnt = 0;
	int C = 10, Ccnt = 0;
	int Total;
	cin >> Total;
	if ((Total % 10) != 0){ 
		cout << "-1";
		return 0;
	}
	while(1){
		if ((Total / A) != 0) { Total = Total - A; Acnt++; }
		else break;
	}
	while (1){
		if ((Total / B) != 0) { Total = Total - B; Bcnt++; }
		else break;
	}
	while (1){
		if ((Total / C) != 0){ Total = Total - C; Ccnt++; }
		else break;
	}
	cout << Acnt<<" "<< Bcnt<< " " << Ccnt;
}