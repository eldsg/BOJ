#include<stdio.h>
int a,t,i=2,b=1,c=2;
int main(){
    scanf("%d", &a);
    for(; i<a; i++){
        t = (b + c)%15746;
        b = c, c = t;
    }
    printf("%d", t);
}