#include <stdio.h>
#include <math.h>
int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		long long int num;
		scanf("%lld", &num);
		bool check = false;
		for(long long int i = num;; i++){
			if(i <= 2){
				printf("2\n");
				break;
			}
			else if( i == 3){
				printf("3\n");
				break;
			}
			long long int temp = (long long int)sqrt(i);
			for(long long int j = 2; j<=temp; j++){
				if(i%j ==0) {
					check = false;
					break;
				}
				else {
					check = true;
				}
			}
			if(check) {
				printf("%lld\n", i);
				break;
			}
		}
	}
}
