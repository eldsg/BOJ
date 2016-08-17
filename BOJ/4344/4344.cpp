#include<cstdio>

int n, a, i, j;

int main(){
	scanf("%d\n", &n);
	for(i = 0; i < n; i++){
		int num[1001], tot = 0, con = 0;
		scanf("%d", &a);
		for(j = 0; j < a; j++){
			scanf("%d", &num[j]);
			tot += num[j];
		}
		double aver = (double)tot/(double)a;
		for(j = 0; j < a; j++){
			if(num[j] > aver) con++;
		}
		double ret = (double)con/(double)a;
		printf("%.3lf%c\n", ret*100, '%');
	}
}
