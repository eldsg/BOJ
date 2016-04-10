#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int g6[51], g1[51], sum = 0, sum1 =0;
int main(){
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++){
		cin >> g6[i] >> g1[i];
	}
	sort(g6, g6 + M);
	sort(g1, g1 + M);
	sum1 = g6[0] * ceil(N / 6.0);
	while (1){
		if (g1[0] * 6 < g6[0]){
			sum = g1[0] * N;
			break;
		}
		if (N < 6){
			N -= 1;
			sum += g1[0];
		}
		else{
			N -= 6;
			sum += g6[0];
		}
		if (N == 0) break;
	}
	if (sum1 < sum) cout << sum1 << endl;
	else cout << sum << endl;
}