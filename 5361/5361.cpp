#include<stdio.h>
int main(){
    double a =350.34, b=230.90, c=190.55, d=125.30, e=180.90;
    int t;
    scanf("%d",&t);
    while(t--){
        double a1,b1,c1,d1,e1;
        scanf("%lf%lf%lf%lf%lf", &a1,&b1,&c1,&d1,&e1);
        double result = a1*a+b1*b+c1*c+d1*d+e1*e;
        printf("$%.2lf\n",result);
    }
}