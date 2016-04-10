#include<stdio.h>
int main(){
    int t, max=0, temp=0;
    scanf("%d",&t);
    while(t--){
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a==b && a==c && a==d) max=50000+a*5000;
        else if(a==b && a==c && a!=d) max = 10000+a*1000;
        else if(b==c && b==d && b!=a) max = 10000+b*1000;
        else if(a==c && a==d && a!=b) max=10000+a*1000;
        else if(a==b && a==d && a!=c) max= 10000+a*1000;
        else if(a==b && c==d && a!=c) max = 2000+a*500+c*500;
        else if(a==c && b==d && a!=b) max = 2000+a*500+b*500;
        else if(a==d && b==c && a!=b) max = 2000+a*500+b*500;
        else if(a==b && c!=d && a!=c && a!=d) max = 1000+a*100;
        else if(a==c && b!=d && a!=b && a!=d) max = 1000+a*100;
        else if(a==d && b!=c && a!=b && a!=c) max = 1000+a*100;
        else if(b==c && a!=d && a!=b && b!=d) max = 1000+b*100;
        else if(b==d && a!=c && a!=b && b!=c) max = 1000+b*100;
        else if(c==d && a!=b && c!=a && c!=b) max = 1000+c*100;
        else if(a!=b && b!=c && c!=d && d!=a){
            int max2 = a;
            if(b > max2) max2= b;
            if(c > max2) max2 = c;
            if(d > max2) max2 = d;
            max = max2*100;            
        }
        if(max>temp) temp = max;
    }
    printf("%d\n", temp);
}