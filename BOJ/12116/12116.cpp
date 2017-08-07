#include <bits/stdc++.h>

using namespace std;

int main(){
	long long limit;
	scanf("%lld", &limit);
	for(long long i = 2; (i*(i+1))/2 <= limit; i++){
		if(i%2==1){
			if(limit % i == 0) printf("%lld %lld\n", limit/i-(i/2), limit/i+i/2);
		}
		else{
			if(limit % i == i/2) printf("%lld %lld\n", limit/i-(i/2)+1, limit/i+i/2);
		}
	}
}