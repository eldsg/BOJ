#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
    int T;
    cin >> T;
    getchar();
    while(T--){
        string a;
        getline(cin,a);
        if(a[0]>='a' && a[0]<='z') a[0]-=32;
        cout << a << endl;        
    }

}