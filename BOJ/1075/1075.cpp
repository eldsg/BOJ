#include<stdio.h>
#include<string.h>
int main(){
    long long int a,b,c,d,result=0;
    scanf("%lld", &a);
    scanf("%lld", &b);
    d = a%100;
    a-=d;
    while(1){
        if(a%b==0) break;
        a++;
        result++;
    }
    printf("%02lld",result);
}