#include <bits/stdc++.h>

using namespace std;

vector<double> score;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++){
		double l;
		scanf("%lf", &l);
		score.push_back(l);
	}
	sort(score.begin(), score.end());
	double ret = 0;
	for(int i = k; i < n-k; i++){
		ret += score[i];
	}
	printf("%.2lf\n%.2lf\n", ret/(1.0*n-2*k)+1e-6, (ret + (1.0*k)*(score[k]+score[n-k-1]))/(1.0*n) + 1e-6);
}