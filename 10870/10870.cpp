#include<stdio.h>
int fibo[32] = { 0, 1, 1, };
int main(){
    for(int i = 3; i<32; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    int num;
    scanf("%d", &num);
    printf("%d", fibo[num]);
}