#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int b= a.size();
    for(int i=0; i<b; i++){
        cout << a[i];
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            i+=2;
        }
    }
}