#include<stdio.h>

int main(){
	long long int a, b, c, count1 = 0, count2= 0;
	scanf("%lld %lld %lld", &a, &b, &c);
	if(b > 0){
		//for(long long i = 0; i<b; i+=a) count1++;
		//for(long long i = 0; i<=c; i+=a) count2++;
		count1 = b/a;
		count2 = c/a;
		if(b%a == 0) count2++;
		printf("%lld", count2-count1);
	}
	else if(b==0){
		count1 = c/a+1;
	//	for(long long i = 0; i<=c; i+=a) count1++;
		printf("%lld", count1);
	}
	else{
		if(c > 0){
			count1 = c/a+1;
			count2 = b/a-1;
			count2*=-1;
	//		for(long long i = 0; i<=c; i+=a) count1++;
	//		for(long long i = 0; i>=b; i-=a) count2++;
			printf("%lld", count1+count2-1);
		}
		else if(c == 0){
			count1 = b/a-1;
			count1*=-1;
			printf("%lld", count1);
		}
		else{
			count1 = c/a-1;
			count2 = b/a-1;
			if(c%a == 0) count2--;
			count1*=-1;
			count2*=-1;
		//	for(long long i = 0; i>=c; i-=a) count1++;
		//	for(long long i = 0; i>=b; i-=a) count2++;
			printf("%lld", count2-count1);
		}
	}
}
