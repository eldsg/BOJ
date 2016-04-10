#include<stdio.h>
int main(){
    int a, b, c, re=0, te=0, te2=0;
    scanf("%d %d %d", &a, &b, &c);
    re = (a+b)/c;
    te = (a+b)/c;
    te2 = (a+b)%c;
    while(1){
        int temp = te, temp2 = te2;
        re+= (temp+temp2)/c;
        te2 = (temp+temp2)%c;
        te = (temp+temp2)/c;
        if(te+te2 < c) break;
    }
    printf("%d", re);
}