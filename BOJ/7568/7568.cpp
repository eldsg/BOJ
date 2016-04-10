#include <iostream>
#include <vector>
using namespace std;

int main(){
	int p;
	int k = 1;
	int last[51];
	pair<int, int> num[51];
	cin >> p;
	for (int i = 0; i < p; i++){
		cin >> num[i].first >> num[i].second;
	}
	for (int i = 0; i < p; i++){
		for (int j = 0; j < p; j++){
			if (num[i].first < num[j].first && num[i].second < num[j].second){
				k++;
			}
		}
		last[i] = k;
		k = 1;
	}
	for (int i = 0; i < p; i++){
		cout << last[i] << " ";
	}
}