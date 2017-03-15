#include<cstdio>

#define ll long long

ll min(ll a, ll b){
	return a > b ? b : a;
}

int main(){
	ll x, y, w, s;
	ll ret;
	scanf("%lld%lld%lld%lld", &x, &y, &w, &s);
	if(x < y){
		x = x^y;
		y = x^y;
		x = x^y;
	}
	ret = min((x+y)*w, (x-y)*w+y*s);
	ret = min(ret, x*s + (x-y)%2*(w-s));
	printf("%lld\n", ret);
}
