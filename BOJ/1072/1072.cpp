#include<cstdio>

int main(){
	long long a, b;
	while(scanf("%lld %lld", &a, &b) != EOF){
		long long min1 = b;
		long long max1 = 2e9+1;
		long long z = (b*100)/a;
		long long mid, z1, z2;
		if(z >= 99) puts("-1");
		else{
			while(max1 >= min1){
				mid = (min1+max1)/2;
				z1 =(mid*100)/(mid-b+a);
				if(z1 > z){
					max1 = mid-1;
				}
				else min1 = mid+1;
			}
		//			printf("%lld %lld %lld\n", z1, z2);
		//			printf("%lld %lld\n", mid, min1);
			printf("%lld\n", min1-b);
		}

	}
}
