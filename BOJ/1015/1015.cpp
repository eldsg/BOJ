#include <iostream>
#include <vector>
using namespace std;
pair<int, int> a[51];

int main(){
	int T, k = 0;
	cin >> T;
	for (int i = 0; i < T; i++){
		cin >> a[i].first;
		a[i].second = T-1;
	}
	for (int i = 0; i < T; i++){
		for (int j = 0; j < T; j++){
			if (a[i].first > a[j].first){
				a[j].second--;
			}
		}
	}
	for (int i = 0; i < T; i++){
		int count = -1;
		for (int j = i; j < T; j++){
			if (a[i].second == a[j].second){
				count++;
			}
		}
		a[i].second -= count;
	}
	for (int i = 0; i < T; i++){
		cout << a[i].second << endl;
	}
}