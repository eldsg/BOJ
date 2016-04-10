#include<stdio.h>
int main(){
    unsigned long long int i,k,b=1, result=0;
    scanf("%lld", &k);
    for(i=k; i<k*k; i+=k){
        result+= i+b++;
    }
    printf("%lld", result);
}