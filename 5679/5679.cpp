#include<iostream>
using namespace std;
int main(){
    long long int a, temp;
    while(1){
    cin >> a;
    temp = a;
    if(!a) break;
    while(a!=1){
        if(a%2==0){
            a/=2;
        }
        else{
            a = a*3 +1;
            if(a>temp) temp = a;
            }
    }
        cout << temp << endl;
    }
}