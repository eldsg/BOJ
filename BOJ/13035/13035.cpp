#include<cstdio>
#include<cmath>

#define ll long long

using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll a, b, c;
		scanf("%lld%lld%lld", &a, &b, &c);
		ll num = a*b;
		ll num2 = c*c;
		if(abs((num/num2)*num2 - num) < abs(((num/num2)+1)*num2-num)){
			if((num/num2)*num2 == 0) printf("%lld\n", ((num/num2)+1)*num2);
			else printf("%lld\n", (num/num2)*num2);
		}
		else printf("%lld\n", ((num/num2)+1)*num2);
	}
}
