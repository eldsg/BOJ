#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		int a, b, c, am, bm, cm, maxvalue=0;
		scanf("%d %d %d", &a, &b, &c);
		scanf("%d %d %d", &am, &bm, &cm);
		int ab = min(a, b);
		for(int i = 0; i<=ab; i++){
			int bc = min(b-i, c);
			for(int j = 0; j<=bc; j++){
				maxvalue = max(maxvalue, i*am+j*bm+min(a-i,c-j)*cm);
			}
		}
		printf("%d\n", maxvalue);
	}
}
