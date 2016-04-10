#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	long long int day;
	while (1){
		scanf("%lld", &day);
		if (day == 0){ return 0; }
		long long int total = 0;
		total = (day*day*day + 3 * day*day + 2 * day) / 6;
		printf("%lld\n", total);
	}

}//1292
