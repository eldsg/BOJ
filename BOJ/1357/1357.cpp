#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char a[5], b[5],k[10];
    int e=0,f=0,l=1,g=0;
    cin >> a >> b;
    int c = strlen(a);
    int d = strlen(b);
    for(int i =1; i<=c; i++){
        e+= (a[i-1]-'0')*l;
        l*=10;
    }
    l =1;
    for(int i=1; i<=d; i++){
        f+= (b[i-1]-'0')*l;
        l*=10;
    }
    l=1;
    sprintf(k,"%d",e+f);
    int t= strlen(k);
    for(int i=1; i<=t; i++){
        g+= (k[i-1]-'0')*l;
        l*=10;
    }
    cout << g << endl;
}