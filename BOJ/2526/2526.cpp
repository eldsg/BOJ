#include <iostream>
using namespace std;
int c[10000] = {0};
int main(){
    int a, b, k =1, g,i,j;
    cin >> a >> b;
    c[0] = (a*a)%b;
    while(1){
        c[k] = (a*c[k-1])%b;
        for(i =0; i<k; i++){
            if(c[i] == c[k]){
                cout << k-i << endl;
                return 0;
            }
        }
        k++;
    }    
}