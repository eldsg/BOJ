#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int b[10];
        for(int i=0; i<10; i++){
            cin >> b[i];
        }
        sort(b,b+10);
        cout << b[7] << endl;
    }
}