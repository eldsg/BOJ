#include <cstdio> 
int main()
{
    unsigned long long a, b, c;
    scanf("%llu %llu",&a,&b);
    if(a>b){
        c = b;
        b = a;
        a = c;
    }
    c = b-a-1; if(a==b) c = 0;
    printf("%llu\n",c);
    for(unsigned long long i = a+1; i<b; i++)
    {
        printf("%llu ",i);
    }
}