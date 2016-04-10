#include<iostream>
#include<string>
#include<map>
using namespace std;       
map<int, int> a;
int main(){
    while(1){ 
        string b;
        cin >> b;
        if(b[0] == '#') break;
        for(int i=0; i<b.size()-1; i++){
            a[b[i]-'0']++;
        }
        if(b[b.size()-1]=='e'){
            if(a[1]%2==0){
                b[b.size()-1]='0';
            }
            else{
                b[b.size()-1] = '1';
            }
        }
        else{
            if(a[1]%2==0){
                b[b.size()-1] = '1';
            }
            else b[b.size()-1] = '0';
        }
        a[0]=a[1]=0;
        cout << b << endl;
    }
}