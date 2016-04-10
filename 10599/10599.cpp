#include<stdio.h>
int main(){
    int a, b, c, d;
    while(1){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(!a&&!b&&!c&&!d) break;
        printf("%d %d\n", c-b, d-a);
    }
}
