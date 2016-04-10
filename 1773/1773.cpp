#include<stdio.h>
bool num[2000001];
int main(){
    int a, b,c, result=0;
    scanf("%d %d", &a, &b);
    for(int i = 0; i<a; i++){
        scanf("%d", &c);
        for(int i = c; i<=b; i+=c){
            num[i] = true; 
        }
    }
    for(int i =0; i<=b; i++){
        if(num[i]) result++;
    }
    printf("%d", result);
}