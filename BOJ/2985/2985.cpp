#include<stdio.h>
using namespace std;
int main(){
    int a,b,c;
    double e,f;
    scanf("%d %d %d", &a,&b,&c);    
    e = (double)a/b;
    f = (double)b/c;
    if(a+b==c)printf("%d+%d=%d",a,b,c);
    else if(a*b==c)printf("%d*%d=%d",a,b,c);
    else if(a-b==c)printf("%d-%d=%d",a,b,c);
    else if((double)e == double(c))printf("%d/%d=%d",a,b,c);
    else if(a==b+c)printf("%d=%d+%d",a,b,c);
    else if(a==b-c)printf("%d=%d-%d",a,b,c);
    else if(a==b*c)printf("%d=%d*%d",a,b,c);
    else if((double)a==(double)f)printf("%d=%d/%d",a,b,c);                
    
}