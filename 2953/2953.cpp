#include<iostream>
using namespace std;

int main(){
	int num[6], j = 1, l, result = 0, temp = 0;
	for (int i = 1; i <= 5; i++){
		temp = 0;
		for (int k = 1; k <= 4; k++){
			cin >> num[k];
			temp += num[k];
		}
		if (temp > result){
			result = temp;
			l = j;
		}
		j++;
	}
	cout << l << " " << result << endl;
}