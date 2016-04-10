#include <iostream>
#include <math.h>
using namespace std;
unsigned long long int a[1010000] = {1};
int main(){
    int b;
    for(int i = 1; i<=1001000; i++){
        a[i] = (a[(int)floor(i-sqrt(i))] + a[(int)floor(log(i))] + a[(int)floor(i*sin(i)*sin(i))])%1000000;
    }
    while(1){
    cin >> b;
    if(b==-1) break;
    cout << a[b]<< endl;         
    }
}