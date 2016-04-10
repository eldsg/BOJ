#include <iostream>
using namespace std;
int a[16][16]={0};
int main(){
    int b,c,d,k=1,e,f;
    cin >> b >> c >> d;
    for(int i=1; i<=b; i++){
        if(d==0){
            e= -1, f= -1;
            break;
        }
        for(int j=1; j<=c; j++){
            if(k==d){
                e = i, f = j;
            }
            k++;
        }
    }
    for(int i=1; i<=b; i++) a[i][1] =1;
    for(int j=1; j<=c; j++) a[1][j] =1;
    a[1][1] = 0;
    for(int i=1; i<=b; i++){
        for(int j=1; j<=c; j++){
            if((i<e)&&(j>f)) a[i][j]=0;
            else if(i>e && j<f) a[i][j] =0;
        }
    }
    for(int i=2; i<=b; i++){
        for(int j=2; j<=c; j++){
            if((i<e)&&(j>f)) continue;
            else if(i>e && j<f) continue;
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }
    cout << a[b][c] << endl;
}