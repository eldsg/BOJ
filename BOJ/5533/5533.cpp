#include <iostream>
using namespace std;
int check[4][101]={0}, a[201][4],t,i,j;
int main(){
    cin >> t;
    for(i=1; i<=t; i++){
        for(j=1;j<=3;j++){
            cin >> a[i][j];
            check[j][a[i][j]]++;
        }
    }
    for(i=1; i<=t; i++){
        int res=0;
        for(j=1;j<=3;j++){
            if(check[j][a[i][j]]==1) res+=a[i][j];
        }
        cout << res << endl;
    }
}