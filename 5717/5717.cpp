#include<stdio.h>
int main(){
    int a, b;
    while(1){
        scanf("%d %d", &a, &b);
        if(!a&&!b) break;
        else printf("%d\n",a+b);
    }

}