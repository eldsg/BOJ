#include<stdio.h>
int main(){
    int testcase, k;
    scanf("%d", &testcase);
    while(testcase--){
        long long number = 0;
        scanf("%d", &k);
        while(k--){
            number = (number+1)*2;
        }
        number/=2;
        printf("%lld\n", number);
    }
}