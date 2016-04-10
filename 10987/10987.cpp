#include<stdio.h>
#include<cstring>

int main(){
    char str[128];
    int count = 0;
    scanf("%s", str);
    for(int i = 0; str[i]; i++){
        if(str[i] == 'a' || str[i] == 'i' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u') count++;
    }
    printf("%d", count);
    
}