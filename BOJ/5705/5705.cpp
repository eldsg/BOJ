#include<stdio.h>
int a,b[45] = {1, 1, };
int main(){
    for(int i=2; i<=40; i++){
        b[i] = b[i-1]+b[i-2];
    }
    while(scanf("%d",&a), a!=0){
        printf("%d\n", b[a]);
    }
}