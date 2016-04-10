#include<stdio.h>
int dot[302][302];
int main(){
	dot[1][1] = 1;
	for(int i=2; i<=300; i++){
		dot[i][1] = dot[i-1][1] + i;
	}
	for(int i=1; i<=300; i++){
			int k = i;
		for(int j=2; j<=300; j++){
			dot[i][j] = dot[i][j-1] + k++;
		}
	}
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		bool check = false, check1 = false;
		int a, b, c, d, e ,f;
		scanf("%d %d", &a, &b);
		for(int i = 1; i<=300; i++){
			for(int j =1; j<=300; j++){
				if(dot[i][j] == a){
					c = i;
					d = j;
					check = true;
				}
				if(dot[i][j] == b){
					e = i;
					f = j;
					check1 = true;
				}
			}
			if(check && check1) break;
		}
		printf("%d\n", dot[c+e][d+f]);
	}
}
