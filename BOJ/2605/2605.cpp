#include <iostream> 
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100];
	int p, j;
	for (int i = 0; i<n; i++){
		cin >> p;
		for (j = i; j>i - p; j--){
			a[j] = a[j - 1];
		}
		a[i - p] = i + 1;
	}
	for (int i = 0; i<n; i++)
		cout << a[i] << " ";
	return 0;
}