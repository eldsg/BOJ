#include<stdio.h>
int main(){
    int testcase;
    scanf("%d", &testcase);
    while(testcase--){
        int s = 0, n;
        scanf("%d", &n);
       for(int i = 0; i<n; i++){
           int xpoint,ypoint;
           scanf("%d %d", &xpoint, &ypoint);
           for(int i = 1; i<=10; i++){
               if(xpoint*xpoint+ypoint*ypoint <= 400*i*i){
                   s+= (11-i);
                   break;
               }
           }
       }
        printf("%d\n", s);
    }
}