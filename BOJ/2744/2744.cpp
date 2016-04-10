#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    char a[101];
    cin >> a;
    for(int i=0; i<strlen(a); i++){
        if(a[i] >= 'A' && a[i] <= 'Z') printf("%c",a[i]+32);
        else printf("%c",a[i]-32);
    }
}