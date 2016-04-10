#include<iostream>
using namespace std;

int main(){
    int a = 0, b, c, d,f;
    cin >> b;
    f = b;
    while(1){
        c = b/10;
        d = b%10;
        b = d*10+(c+d)%10;
        a++;
       if(f == b) break;
    }
    cout << a << endl;
}