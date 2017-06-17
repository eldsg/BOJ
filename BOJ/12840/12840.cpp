#include<cstdio>

#define mi 3600*24

int main(){
	int h, m, s, t, q, n;
	scanf("%d%d%d%d", &h, &m, &s, &t);
	int total = 3600*h + 60*m + s;
	while(t--){
//		printf("%d\n", total);
		scanf("%d", &q);
		if(q == 1){
			scanf("%d", &n);
			total += n;
			if(total >= mi){
				total %= mi;
			}
		}
		else if(q == 2){
			scanf("%d", &n);
			total -= n;
			if(total < 0){
				while(total < 0) total += mi;
			}
		}
		else{
			printf("%d %d %d\n", total/3600, (total%3600)/60, (total%3600)%60);
		}
	}
}

