#include<stdio.h>
int main(){
    int T, a;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &a);
        printf("%d %d %d %d\n", a/25, (a%25)/10,((a%25)%10)/5, (((a%25)%10)%5));
    }
}