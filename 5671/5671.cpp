#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
    int a, b;
    for(; ~scanf("%d %d", &a, &b);){
        char c[6],d[6];
        int count=0;
        for(int i=a; i<=b; i++){
            sprintf(c,"%d", i);
            int t= strlen(c);
            if(t==1) count++;
            else if(t==2){
                if(c[0]!=c[1]) count++;
            }
            else if(t==3){
                if(c[0]!=c[1] && c[1]!=c[2] && c[0]!=c[2]) count++;
            }
            else if(t==4){
                if(c[0]!=c[1] && c[0]!=c[2] && c[0]!=c[3] && c[1]!=c[2] && c[1]!=c[3] && c[2]!=c[3])count++;
            }
        }
        printf("%d\n", count);
    }
}