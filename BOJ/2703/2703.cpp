#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
    int T;
    cin >> T;
    getchar();
    while(T--){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        for(int i = 0; i<a.size(); i++){
            if(a[i] >= 'A' && a[i] <= 'Z'){
                a[i] = b[a[i]-'A'];
            }
        }
        cout << a << endl;
    }
}