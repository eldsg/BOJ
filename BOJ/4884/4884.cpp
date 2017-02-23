#include<cstdio>

int main(){
	long long g, a, t, d;
	while(1){
		scanf("%lld%lld%lld%lld", &g, &t, &a, &d);
		if(g==-1 && a==-1 && t==-1 && d==-1) break;
		long long k = 0;
		long long nextg = g*a+d;
		k += g*t*(t-1)/2;
		long long pw = 1;
		while(pw < nextg)
			pw*=2;
		long long addteam = pw-nextg;
		while(pw > 0){
			k += (pw/2);
			pw/=2;
		}
		printf("%lld*%lld/%lld+%lld=%lld+%lld\n", g, a, t, d, k, addteam);
	}
}
