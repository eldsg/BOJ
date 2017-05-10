#include<cstdio>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d%d", &n,&m);
		long long a, b, c, a2 = 0, bc2 = 0;
		a = (n-1)-m/2;
		b = (m-1)/2;
		c = a - b;
		while(a){
			a/=2;
			a2+=a;
		}
		while(b){
			b/=2;
			bc2+=b;
		}
		while(c){
			c/=2;
			bc2+=c;
		}
		printf("%d\n", a2 > bc2 ? 0 : 1);
	}
}
