#include<stdio.h>
int a[1010] = {0,3, 12, },b;
int main(){
    for(int i=3; i<=1000; i++){
        a[i] = a[i-1]+ i*(i+1)+ (i*i+i)/2;
    }
    scanf("%d", &b);
    printf("%d", a[b]);
}