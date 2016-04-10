#include <iostream>
using namespace std;
int count1 = 0;
void subset(int a[], int k, int b, int d, int c[]){
	int sum = 0;
	if (k == b){
		for (int i = 0; i < k; i++){
			if (a[i] == 1){
				sum += c[i];
			}
		}
		if (sum == d){ count1++; }
	}
	else {
		a[k] = 1;
		subset(a, k + 1, b, d, c);
		a[k] = 0;
		subset(a, k + 1, b, d, c);
	}
}
int main(){
	int S, N, arry[32],check[100000];
	cin >> S >> N;
	for (int i = 0; i < S; i++){
		cin >> arry[i];
	}
	subset(check, 0, S, N, arry);
	if (N == 0){ cout << count1 - 1 << endl; }
	else cout << count1 << endl;
}