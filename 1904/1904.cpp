#include<stdio.h>
unsigned long long b[1000000] = {1, 2, };
int main(){
    int a;
    scanf("%d", &a);
    for(int i=2; i<a; i++){
        b[i] = (b[i-1]+b[i-2])%15746;
    }
    printf("%lld", b[a-1]);
}