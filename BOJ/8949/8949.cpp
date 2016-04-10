#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a[10],b[10],h[10];
    long long int c=0;
    for(int i=0; i<10; i++){
        h[i] = '0';
    }
    int d,e,f,g;
    cin >> a >> b;
    d = strlen(a);
    e = strlen(b);
    if(d>e){
        f= d-e;
        for(int i=f; i<d; i++){
            h[i] = b[i-f];
        }
        for(int i=0; i<d; i++){
            int p = a[i]-'0'+h[i]-'0';
            cout << p;
        }
    }
    else{ f = e-d;
         for(int i=f; i<e; i++){
             h[i] = a[i-f];
         }
         for(int i=0; i<e; i++){
             int p = b[i]-'0'+h[i]-'0';
             cout << p;
         }
    }
    
}