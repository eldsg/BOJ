#include<iostream>
using namespace std;
int a[101];
int main(){
	int b, c, temp=0, temp1=-99999999,temp2=0;
	cin >> b >> c;
	for (int i = 0; i < b; i++){
		cin >> a[i];
		temp2 += a[i];
	}
	if (b == c){
		cout << temp2 << endl;
		return 0;
	}
	for (int i = 0; i <= b - c; i++){
		temp = 0;
		for (int j = i; j < c+i; j++){
			temp += a[j];
		}
		if (temp1<temp) temp1 = temp;
	}
	cout << temp1 << endl;	
}