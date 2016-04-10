#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a<b-c) cout << "advertise" << endl;
        else if(a>b-c) cout << "do not advertise" << endl;
        else cout << "does not matter" << endl;
    }
}