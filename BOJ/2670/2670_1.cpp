#include<cstdio>

double dp[10003];
double p[10001];

double max(double a, double b){
	return a > b ? a : b;
}

int main(){
	int N;
	double m = -1;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%lf", p+i);
	}
	for(int i = 0; i < N; i++){
		for(int j = i; j < N; j++){
			if(i==j) dp[i] = p[i];
			else dp[j] = dp[j-1] * p[j];
			m = max(m, dp[j]);
		}
	}
	printf("%.3lf\n", m);
}
