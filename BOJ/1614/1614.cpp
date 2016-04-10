#include<iostream>
using namespace std;
int main(){
    bool check = true;
    long long int a, b, result=0, k=0;
    cin >> a >> b;
    if(b==0){
        cout << 0 << endl;
        return 0;
    }
    if(a==1) cout << 8*b;
    else if(a==2){
        if(b%2)cout << 4*b+3;
        else cout << 4*b+1;
    }
    else if(a==3){
        if(b%2) cout << 4*b+2;
        else cout << 4*b+2;
    }
    else if(a==4){
        if(b%2) cout << 4*b+1;
        else cout << 4*b+3;
    }
    else cout << 8*b+4;
}