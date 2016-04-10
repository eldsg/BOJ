#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int i, size, k;
	double seveng, sevenp, minprice; //삼각김밥 판매점 개수
	double totalprice;
	cin >> seveng; 
	cin >> sevenp; 
	cin >> size;
	minprice = seveng/sevenp;
	double samgak[128][2];
	for (i = 0; i < size; i++){
		cin >> samgak[i][0] >> samgak[i][1];
		if (minprice >(samgak[i][0] / samgak[i][1])){
			minprice = (samgak[i][0] / samgak[i][1]);
		}
	}

	printf("%.2f", 1000*minprice);
}