#include <stdio.h> 
int main(t,a,b){scanf("%d",&t);while(t--){scanf("%d",&a);b=a;while(1){if(a==1)break;if(a%2==0){a=a/2;}else{a=3*a+1;if(a>b)b=a;}}printf("%d\n",b);}}