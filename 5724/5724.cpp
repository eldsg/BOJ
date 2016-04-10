#include<stdio.h>
int main(int t){
    while(scanf("%d",&t),t){
       printf("%d\n", t*(t+1)*(2*t+1)/6);
    }
}