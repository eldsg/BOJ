#include<cstdio>
#include<vector>

using namespace std;

vector<double> st;
double num[10001];

double max(double a, double b){
	return a > b ? a : b;
}

double update(int s, int e, int n){
	if(s == e) return st[n] *= num[s];
	return st[n] = update(s, (s+e)/2, 2*n) * update((s+e)/2+1, e, 2*n+1);
}
double query(int s, int e, int n, int l, int r){
	if(l > e || r < s) return 1;
	if(l <= s && e <= r) return st[n];
	return query(s, (s+e)/2, 2*n, l, r) * query((s+e)/2+1, e, 2*n+1, l, r);
}

int main(){
	int N;
	scanf("%d", &N);
	st.resize(4*N, 1);
	for(int i = 0; i < N; i++){
		scanf("%lf", &num[i]);
	}
	update(0, N-1, 1);
	double m = -1;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			m = max(query(0, N-1, 1, i, j), m);
		}
	}
	printf("%.3lf", m);
}
