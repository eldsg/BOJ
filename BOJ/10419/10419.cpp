#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        int b = sqrt(a);
        for(int i = 0; i<=b+1; i++){
            if((a-i)-(i*i)<0){
                cout << i-1 << endl;
                break;
            }
        }        
    }
}