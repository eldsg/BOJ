#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int i, j, N, M, a[100001], b[100001];
	cin >> N;
	for (i = 0; i < N; i++){
		cin >> a[i];
	}
	sort(a, a + N);
	vector<int> v(a, a + N);
	cin >> M;
	for (i = 1; i <= M; i++){
		cin >> b[i];
	}
	for (j = 1; j <= M; j++){
		if (binary_search(v.begin(),v.end(), b[j])){
			cout << 1 << endl;
		}
		else cout << 0 << endl;
	}
}
//1920