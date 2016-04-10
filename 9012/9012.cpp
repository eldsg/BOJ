#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        bool check = false;
        string a;
        cin >> a;
        int n=0, m=0;
        int b = a.size();
        for(int i = 0; i<b; i++){
            if(m>n) check = true;
            if(a[i] == '(') n++;
            else if(a[i] == ')') m++;
        }
        if(n==m && !check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}