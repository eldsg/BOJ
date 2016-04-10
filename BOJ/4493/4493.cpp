#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int p1=0,p2=0;
        int a;
        cin >> a;
        while(a--){
            char b,c;
            cin >> b >> c;
            if(b=='R' &&c=='S') p1++;
            else if(b=='R'&& c== 'P') p2++;
            else if(b=='P'&& c=='S') p2++;
            else if(b=='P'&& c=='R') p1++;
            else if(b=='S'&& c=='R') p2++;
            else if(b=='S'&& c=='P') p1++;
         }
        if(p1>p2) cout << "Player 1"<< endl;
        else if(p1<p2) cout << "Player 2"<<endl;
        else cout << "TIE" << endl;
    }
}