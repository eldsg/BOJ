#include <iostream>
using namespace std;
int main(){
    int a,b,c,max=0;
    cin >> a >> b >> c;
    if(a>b && a>c) max = a;
    else if(b>a && b>c) max = b;
    else if(c>a && c>b) max = c;
    if(a==b && b==c) cout << 10000+a*1000 << endl;
    else if(a==b && b!=c) cout << 1000+a*100 << endl;
    else if(a==c && c!=b) cout << 1000+a*100 << endl;
    else if(b==c && a!=b) cout << 1000+b*100 << endl;
    else if(a!=b && b!=c) cout << max*100 << endl;
}