#include<iostream>
#include<string>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    int c = a.size();
    int d = b.size();
    int e=0;
    if(c==d){
        for(int i=0; a[i]==b[i]; i++){
            if(a[i]=='8') e++;
        }
        cout << e;
    }
    else cout << 0;
}
