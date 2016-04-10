#include <stdio.h>
int c[1001][4];
int main(){
    int a, b, p=1,t;
    scanf("%d %d", &a, &b);
    for(int i=0; i<a; i++){
        scanf("%d", &t);
        scanf("%d %d %d", &c[t][1],&c[t][2],&c[t][3]);
    }
    for(int i=1; i<=a; i++){
        if(c[i][1]>c[b][1] ||
           c[i][1]==c[b][1] && c[i][2]>c[b][2] ||
           c[i][1]==c[b][1] && c[i][2]==c[b][2] && c[i][3]>c[b][3]) {
            p++;
        }
    }
    printf("%d\n", p);
}