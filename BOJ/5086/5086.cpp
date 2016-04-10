#include <iostream>
using namespace std;
int main(){
    int a, b;
    while(1){
        cin >> a >> b;
        if(a==0 && b==0) return 0;
        if(a > b && (a%b == 0 || b%a == 0)){
            cout << "multiple" << endl;
        }
        else if(b > a &&(a%b==0 || b%a == 0)){
            cout << "factor" << endl;
        }
        else cout << "neither" << endl;
    }

}