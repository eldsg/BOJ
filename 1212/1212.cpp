#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char b[333335];
    cin >> b;
    int c = strlen(b);
    for(int i = 0; i<c; i++){
        if(b[i]-'0'==1 && i==0) cout << "1";
        else if(b[i]-'0'==2 && i==0) cout << "10";
        else if(b[i]-'0'==3 && i==0) cout << "11";
        else if(b[i]-'0'==0) cout << "000";
        else if(b[i]-'0'==1) cout << "001";
        else if(b[i]-'0'==2) cout << "010";
        else if(b[i]-'0'==3) cout << "011";
        else if(b[i]-'0'==4) cout << "100";
        else if(b[i]-'0'==5) cout << "101";
        else if(b[i]-'0'==6) cout << "110";
        else if(b[i]-'0'==7) cout << "111";                    
    }
}