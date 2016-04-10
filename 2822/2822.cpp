#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	pair<int, int> a[10];
	int i,result,b[10],k=0;
	for (i = 0; i < 8; i++){
		cin >> a[i].first;
		a[i].second = i+1;
	}
	sort(a, a + 8);
	result = a[7].first + a[6].first + a[5].first + a[4].first + a[3].first;
	cout << result << endl;
	for (i = 3; i <= 7; i++){
		b[k] = a[i].second;
		k++;
	}
	sort(b, b + 5);
	for (i = 0; i < 5; i++){
		if (i == 4){ cout << b[i]<< endl; }
		else cout << b[i] << " ";
	}
}