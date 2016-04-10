#include<iostream>
#include<cstdlib>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
    char a[8], b[8];
    cin >> a >> b;
    for(int i=0; i<strlen(a); i++){
        if(a[i]=='6') a[i] = '5';
    }
    for(int i=0; i<strlen(b); i++){
        if(b[i]=='6') b[i] = '5';
    }
    int c = atoi(a);
    int d = atoi(b);
    cout << c+d << " ";
    for(int i=0; i<strlen(a); i++){
        if(a[i]=='5') a[i] = '6';
    }
    for(int i=0; i<strlen(b); i++){
        if(b[i]=='5') b[i] = '6';
    }
    c = atoi(a);
    d = atoi(b);
    cout << c+d << endl;
}