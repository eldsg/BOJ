#include<stdio.h>
int a[20] = {1,2,4,},b;
int main(){
    int T,i=3;
    scanf("%d", &T);
    for(; i<12; i++){
        a[i] = a[i-1]+a[i-2]+a[i-3];
    }
    while(T--){
        scanf("%d", &b);
        printf("%d\n", a[b-1]);
    }
}