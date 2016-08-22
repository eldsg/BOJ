#include<cstdio>
using namespace std;
bool check(int m, int n, int p, int q){
	int a = m*p+n*q;
	int b = m*q-n*p;
	int c = m*m+n*n;
	if(a%c == 0 && b%c == 0) return true;
	else return false;
}

int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		int p, q, ret = 0;
		scanf("%d %d", &p, &q);
		int maxnum = p*p + q*q;
		for(int m = 0; m*m <= maxnum; m++){
			for(int n = 0; m*m+n*n<= maxnum; n++){
				if(m==0 && n==0) continue;
				if(check(m, n, p, q)) ret++;
				if(m!=0 && check(-m, n, p, q)) ret++;
				if(n!=0 && check(m, -n, p, q)) ret++;
				if(m!=0 && n!=0 &&check(-m, -n, p, q)) ret++;
			}
		}
		if(ret == 8) printf("P\n");
		else printf("C\n");
	}
}
