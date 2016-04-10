#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){
    int a, b, t, temp;
    cin >> a >> b >> t;
    temp = abs(a-b);
    while(t--){
        int k;
        cin >> k;
        if(temp > abs(b-k)) temp = abs(b-k);
    }
    if(temp == abs(a-b)) cout << abs(a-b);
    else cout << temp+1;
}