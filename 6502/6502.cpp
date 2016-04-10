#include<stdio.h>
int main(){
    int a, b, c,k=1;
    while(1){
        scanf("%d", &a);
        if(a==0) break;
        scanf("%d %d", &b, &c);
        if(4*a*a>= (b*b)+(c*c))printf("Pizza %d fits on the table.\n", k++);
        else printf("Pizza %d does not fit on the table.\n", k++);        
    }
}