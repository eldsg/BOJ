#include<stdio.h>
unsigned long long facto(int n){
    unsigned long long temp = 1;
    for(int i = n; i>0; i--){
        temp *= i;
    }
    return temp;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%llu", facto(n));
}