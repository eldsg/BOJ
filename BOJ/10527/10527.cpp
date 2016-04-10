#include <iostream>
#include <map>
#include <string>
using namespace std;
map<string, int> in;
int main(){
    int c,result=0;
    cin >> c;
    for(int i=0; i<c; i++){
        string a;
        cin >> a;
        in[a]++;
    }
    for(int i=0; i<c; i++){
        string b;
        cin >> b;
        if(in[b]>0){
            in[b]--;
            result++;
        }
    }
    cout << result << endl;
    
}