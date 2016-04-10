#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a+b+c == 180){
        if(a==b || b==c || a==c){
            if(a==b && b==c){
                printf("Equilateral");
            }
            else printf("Isosceles");
        }
        else printf("Scalene");
    }
    else printf("Error");
}