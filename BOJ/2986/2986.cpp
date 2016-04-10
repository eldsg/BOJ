#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a, count =0;
    cin >> a;
    int b = sqrt(a);
    for(int i = 2; i<=b; i++){
        if(!(a%i)){
            count = i;
            break;
        }
    }
    if(count==0){
        cout << a-1 << endl;
    }
    else cout << a-(a/count) << endl;
}