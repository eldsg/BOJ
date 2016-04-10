#include<stdio.h>
#include<stdlib.h>
long long int x[10001];
int main(){
    long long int a, result=0;
    scanf("%lld", &a);
    for(int i =0; i<a; i++){
        scanf("%lld", &x[i]);
    }
    for(int i =0; i<a; i++){
        for(int j=0; j<a; j++){
            result+= abs(x[i]-x[j]);
        }
    }
    printf("%lld", result);
}