#include<iostream>
using namespace std;
int a[10],b[10],res1=0,res2=0;
int main(){
    char c = 'D';
    for(int i=0; i<10; i++){
        cin >> a[i];
    }
    for(int i=0; i<10; i++){
        cin >> b[i];
    }
    for(int i=0; i<10; i++){
        if(a[i]>b[i]){
            res1+=3;
            c = 'A';
        }
        else if(a[i]<b[i]){
            res2+=3;
            c = 'B';
        }
        else {
            res1+=1, res2+=1;
        }
    }
    if(res1==res2) cout << res1 << " " << res2 << endl << c << endl;
    else if(res1>res2) cout << res1 << " "<< res2 << endl << "A" << endl;
    else cout << res1 << " " << res2 << endl << "B" << endl;
}