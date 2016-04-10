#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int T;
    cin >> T;
    getchar();
    while(T--){
        string a;
        int b = 1, res=0,i;
        getline(cin,a);
        for(i=0; i<a.size(); i++){
            if(a[i]=='O'){
                res+=b;
                b++;
            }
            else{
                b=1;
            }
        }
        cout << res << endl;
    }
}