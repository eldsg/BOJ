#include<iostream>
using namespace std;
int main(){
	int i, j, n, count =0;
	cin >> n;
	for (i = 1; i <= n; i++){
		for (j = i; i*j <= n; j++){
			count++;
		}
	}
	cout << count << endl;
}