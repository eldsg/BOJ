#include <stdio.h>
int k, T, a=0, b=0;
int main(){
  	scanf("%d", &T);
    while(T--){
        scanf("%d", &k);
        a += (k/60+1)*15;
        b += (k/30+1)*10;
    }
    if(a<b) printf("M %d\n", a);
    else if(b < a)printf("Y %d\n", b);
    else printf("Y M %d\n", a);
}