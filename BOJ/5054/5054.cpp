#include<iostream>
using namespace std;
int main(){
	int testcase, set, i, num, temp1 = 0, temp2 = 100;
	cin >> testcase;
	for (int j = 0; j < testcase; j++){
		cin >> set;
        temp1=0;
        temp2=100;
		for (i = 0; i < set; i++){
			cin >> num;
			if (num > temp1){
				temp1 = num;
			}
			if (num < temp2){
				temp2 = num;
			}
		}
		cout << (temp1 - temp2) * 2 << endl;
	}
}