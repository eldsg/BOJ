#include<iostream>
using namespace std;

int main(){
	int plugset, result = 0;
	int *plug;
	cin >> plugset;
	plug = new int[plugset];
	for (int i = 0; i < plugset; i++){
		cin >> plug[i];
		result += plug[i] - 1;
	}
	cout << result + 1 << endl;
}