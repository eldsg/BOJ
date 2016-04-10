#include<stdio.h>
const int mod = 45678;
int main(){
    unsigned long long int n, l,r;
    scanf("%llu", &n);
    printf("%llu\n", (((n+1)*(3*n+2))/2) % mod);
}
