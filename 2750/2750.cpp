#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int A, num[1001];
	cin >> A;
	for (int i = 0; i < A; i++){
		cin >> num[i];
	}
	sort(num, num + A);
	for (int i = 0; i < A; i++){
		cout << num[i] << endl;
	}
}