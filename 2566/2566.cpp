#include<iostream>
using namespace std;

int main(){
	int num[10][10], max, temp = 0, k, l;
	for (int i = 1; i < 10; i++){
		for (int j = 1; j < 10; j++){
			cin >> num[i][j];
			max = num[i][j];
			if (max > temp){
				temp = max;
				k = i;
				l = j;
			}
		}
	}
	cout << temp << endl;
	cout << k << " " << l << endl;
}