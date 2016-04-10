#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[16];
bool make(int t, int len){
    int c = 1, d = 1;
    for(int i = 0; i < t; i++){
        c *= a[i]-'0';
    }
    for(int i = t; i < len; i++){
        d *= a[i]-'0';
    }
    if (c == d) return true;
    else return false;
}
int main(){
    bool check = false;
    scanf("%s", a);
    int k = strlen(a);
    for(int i = 1; i<k; i++){
        check = make(i,k);
        if(check) break;
    }
    if(check) printf("YES");
    else printf("NO");
    
}