#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string a[20001];
	int N, k = 0;
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> a[i];
	}
	int count[20001];
	for (int i = 0; i < N; i++){
		for (int j = i+1; j < N; j++){
			if (a[i].size() > a[j].size()){
				swap(a[i], a[j]);
			}
		}
	}
	for (int i = 0; i < N; i++){
		if (a[i].size() != a[i + 1].size()){
			count[k++] = i;
		}
	}
	sort(a, a + count[0]+1);
	for (int i = 0; i < k - 1; i++){
		sort(a + count[i] + 1, a + count[i + 1]+1);
	}
	sort(a + count[k - 1], a + N);
	for (int i = 0; i < N; i++){
		if (a[i] == a[i + 1]) continue;
		else cout << a[i] << endl;
	}
}