#include<iostream>
using namespace std;
int main(){
	int testcase, num;
	cin >> testcase;
	while (testcase != 0){
		cin >> num;
		for (int i = 1; i <= num; i++){
			if (i == 1 || i == num){
				for (int j = 1; j <= num; j++){
					cout << "#";
				}
			}
				else if (i != 1 || i != num){
					cout << "#";
					for (int k = 1; k <= num - 2; k++){
						cout << "J";
					}
					cout << "#";
				}
			cout << endl;
		}
		cout << endl;
		testcase--;
	}
}