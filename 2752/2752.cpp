#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int num[5];
	for (int i = 0; i < 3; i++){
		cin >> num[i];
	}
	sort(num, num + 3);
	cout << num[0] << " " << num[1] << " " << num[2] << endl;
}