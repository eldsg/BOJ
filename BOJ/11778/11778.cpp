#include<cstdio>
#include<vector>

using namespace std;
#define ull unsigned long long
#define MOD 1000000007
typedef vector<vector<ull> > mat;

mat mul(mat a, mat b){
	mat c(3, vector<ull>(3));
	for(int i = 1, j, k; i <= 2; i++){
		for(j = 1; j <=2; j++){
			for(k = 1; k<=2; k++){
				c[i][j] = (c[i][j]+a[i][k]*b[k][j])%MOD;
			}
		}
	}
	return c;
}

mat pow(mat a, ull n){
	if(n==1) return a;
	if(n%2) return mul(a, pow(a, n-1));
	mat x = pow(a, n/2);
	return mul(x, x);
}

ull fibo(ull n){
	vector<ull> f(3);
	f[1] = 1, f[2] = 1;
	mat t(3, vector<ull>(3));
	t[1][1] = 0, t[1][2] = 1, t[2][1] = 1, t[2][2] = 1;
	if(n == 1) return 1;
	t = pow(t, n-1);
	ull ret = 0;
	for(int i = 1; i<=2; i++){
		ret = (ret + t[1][i]*f[i]) % MOD;
	}
	return ret;
}



ull gcd(ull a, ull b){
	ull c;
	while(a!=0) c = a, a = b%a, b=c;
	return b;
}

int main(){
	ull a, b;
	scanf("%llu%llu", &a, &b);
	ull k = gcd(a, b);
	ull l = fibo(k);
	printf("%llu\n", l);
}
