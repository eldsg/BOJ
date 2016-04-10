#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        char b[5],c[5];
        int k,result=0,i=0,j=0;
        cin >> a;
        for(int i=0; i<5; i++){
            b[i] = '\0';
            c[i] = '\0';
        }
        if(a[0] >='0' && a[0] <='9'){
            while(a[i]!='+'){
                b[i] = a[i];
                i++;
            }
            while(a[i]){
                c[j++] = a[i++];
            }
            result+=atoi(b);
            result+=atoi(c);
            cout << result << endl;
        }
        else cout << "skipped" << endl;
    }
}