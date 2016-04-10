#include<iostream>
using namespace std;
int l,a,b,c,d,res,res1;
int main(){
    cin >> l >> a >> b >> c>> d;
    if(a%c==0) res = a/c;
    else res = a/c+1;
    if(b%d==0) res1 = b/d;
    else res1 =b/d+1;
    if(res>res1) cout << l-res;
    else cout << l-res1;
}