#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a, b[100000];
    cin >> a;
    for(int i = 0; i<a; i++){
        cin >> b[i];
    }
    sort(b, b+a);
    for(int i = 0; i<a; i++){
        b[i]-=i;
    }
    sort(b, b+a);
    cout << b[a-1]+a+1 << endl;

}