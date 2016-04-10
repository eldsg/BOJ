#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        string a;
        getline(cin,a);
        int t = a.size()/2;
        if(a[t] == a[t-1]) cout << "Do-it"<<endl;
        else cout << "Do-it-Not"<<endl;
    }

}