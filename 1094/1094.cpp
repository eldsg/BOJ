#include<iostream>
using namespace std;
int main(){
    int x, len=64,re=0,temp,sum=0;
    cin >> x;
    temp =x;
    while(temp != sum&&len>0){
        while(len>x){
            len/=2;
        }
        sum+=len;
         x-=len;
        re++;
    }
    cout << re << endl;
}